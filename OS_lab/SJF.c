#include <stdio.h>
#include <stdbool.h>

void findCompletionTime(int n, int arrival_time[], int burst_time[], int completion_time[])
{
    int current_time = 0, completed = 0, min_index;
    bool is_completed[n]; // To keep track of completed processes

    for (int i = 0; i < n; i++)
    {
        is_completed[i] = false; // Mark all processes as incomplete initially
    }

    while (completed != n)
    {
        min_index = -1;
        int min_burst = 1000000; // Use a large value as an initial minimum

        // Find the process with the shortest burst time among the arrived ones
        for (int i = 0; i < n; i++)
        {
            if (arrival_time[i] <= current_time && !is_completed[i])
            {
                if (burst_time[i] < min_burst || (burst_time[i] == min_burst && arrival_time[i] < arrival_time[min_index]))
                {
                    min_burst = burst_time[i];
                    min_index = i;
                }
            }
        }

        // If no process has arrived by current time, move the current time to the next arrival
        if (min_index == -1)
        {
            current_time++;
        }
        else
        {
            current_time += burst_time[min_index];
            completion_time[min_index] = current_time; // Set completion time
            is_completed[min_index] = true;            // Mark the process as completed
            completed++;
        }
    }
}

void printProcesses(int n, int arrival_time[], int burst_time[], int completion_time[])
{
    printf("\nProcess\tArrival Time\tBurst Time\tCompletion Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t\t%d\t\t%d\n", i + 1, arrival_time[i], burst_time[i], completion_time[i]);
    }
}

int main()
{
    int n;

    // Input: Number of processes
    // printf("Enter the number of processes: ");
    scanf("%d", &n);

    int arrival_time[n], burst_time[n], completion_time[n];

    // Input: Arrival time and burst time for each process
    for (int i = 0; i < n; i++)
    {
        // printf("Enter Arrival Time and Burst Time for Process %d: ", i + 1);
        scanf("%d %d", &arrival_time[i], &burst_time[i]);
    }

    // Calculate completion times for each process using SJF (non-preemptive)
    findCompletionTime(n, arrival_time, burst_time, completion_time);

    // Print the process information along with their completion time
    printProcesses(n, arrival_time, burst_time, completion_time);

    return 0;
}
