#include <stdio.h>
#include <stdbool.h>

void fifoPageReplacement(int pages[], int n, int capacity)
{
    int memory[capacity];             // Array to represent memory frames
    int front = 0;                    // Index to track the oldest page (FIFO)
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
            // Page fault occurred
            page_faults++;

            // Replace the oldest page (FIFO)
            if (memory[front] != -1)
            {
                // Mark the page being removed as no longer in memory
                is_in_memory[memory[front]] = false;
            }

            // Add the new page to memory
            memory[front] = page;
            is_in_memory[page] = true;

            // Move the front index to the next position (circular queue)
            front = (front + 1) % capacity;
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

    // Call the FIFO Page Replacement algorithm
    fifoPageReplacement(pages, n, capacity);

    return 0;
}
