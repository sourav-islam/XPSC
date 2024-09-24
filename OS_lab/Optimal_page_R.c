#include <stdio.h>
#include <stdbool.h>

int findOptimal(int pages[], int memory[], int n, int currentIndex, int capacity)
{
    int farthest = currentIndex; // Tracks the farthest future use of a page
    int indexToReplace = -1;     // Index of the page to be replaced

    for (int i = 0; i < capacity; i++)
    {
        int j;
        for (j = currentIndex; j < n; j++)
        {
            if (memory[i] == pages[j])
            {
                if (j > farthest)
                {
                    farthest = j;
                    indexToReplace = i;
                }
                break;
            }
        }

        // If a page isn't going to be used again, replace it
        if (j == n)
        {
            return i;
        }
    }

    // If all pages will be used in the future, replace the one that is used farthest
    return (indexToReplace == -1) ? 0 : indexToReplace;
}

void optimalPageReplacement(int pages[], int n, int capacity)
{
    int memory[capacity];             // Array to represent memory frames
    int page_faults = 0;              // Count of page faults
    bool is_in_memory[100] = {false}; // Keep track of whether a page is in memory

    // Initialize the memory array with -1 (indicating empty frames)
    for (int i = 0; i < capacity; i++)
    {
        memory[i] = -1;
    }

    // Loop through each page in the reference string
    for (int i = 0; i < n; i++)
    {
        int page = pages[i];

        // If the page is not in memory, a page fault occurs
        if (!is_in_memory[page])
        {
            page_faults++;

            // Find the optimal page to replace if memory is full
            if (i >= capacity)
            {
                int index = findOptimal(pages, memory, n, i + 1, capacity);
                is_in_memory[memory[index]] = false; // Mark old page as removed
                memory[index] = page;                // Replace with the new page
            }
            else
            {
                memory[i] = page; // Fill memory initially
            }

            is_in_memory[page] = true; // Mark new page as in memory
        }

        // Print the current state of memory
        printf("Memory: ");
        for (int j = 0; j < capacity; j++)
        {
            if (memory[j] != -1)
                printf("%d ", memory[j]);
            else
                printf("- ");
        }
        printf("\n");
    }

    // Output the total number of page faults
    printf("\nTotal Page Faults: %d\n", page_faults);
}

int main()
{
    int n, capacity;

    // Input the number of pages and the capacity of memory frames
    // printf("Enter number of pages: ");
    scanf("%d", &n);

    int pages[n];
    // printf("Enter page reference sequence: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &pages[i]);
    }

    // printf("Enter number of memory frames: ");
    scanf("%d", &capacity);

    // Call the Optimal Page Replacement algorithm
    optimalPageReplacement(pages, n, capacity);

    return 0;
}
