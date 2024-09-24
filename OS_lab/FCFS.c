#include <stdio.h>

void findComp_time(int n, int ar[], int br[], int cm[])
{
    int curr_time = 0;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > curr_time)
            curr_time = ar[i];
        cm[i] = curr_time + br[i];
        curr_time = cm[i];
    }
}
void printfuc(int n, int ar[], int br[], int cm[])
{
    printf("\nProcess\tArrival Time\tBurst Time\tCompletion Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t\t%d\t\t%d\n", i + 1, ar[i], br[i], cm[i]);
    }
}
int main()
{
    // printf("Number of processes: ");
    int n;
    scanf("%d", &n);
    int ar[n], br[n], cm[n];
    for (int i = 0; i < n; i++)
    {
        // printf("Enter arival_time & brust_time %d", i + 1);
        scanf("%d %d", &ar[i], &br[i]);
    }

    findComp_time(n, ar, br, cm);
    printfuc(n, ar, br, cm);
}