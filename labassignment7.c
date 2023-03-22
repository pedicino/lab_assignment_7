#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void bubbleSort(int a[], int n);

void bubbleSort(int a[], int n)
{
    // Array with n elements initialized to 0, tracks each index's swap occurrences
    int swapCounter[n];
    for(int i = 0; i < n; ++i)
    {
        swapCounter[i] = 0;
    }


    // Iterate once for each element
    for(int i = 0; i < n; ++i)
    {
        // Each element must be compared to its adjacent element (excluding last)
        for(int j = 0; j < n-1; ++j)
        {
            // If left element exceeds right element
            if(a[j] > a[j+1])
            {
                // Perform swap
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;

                // Consider both indices involved to have swapped
                swapCounter[j]++;
                swapCounter[j+1]++;
            }
        }
    }

    // Print counter array outside of original loop
    // (Each index would have been revisited after printing if not)
    for(int i = 0; i < n; ++i)
    {
        printf("Number of swaps for index %d: %d\n", i, swapCounter[i]);
    }
}

int main()
{
int a[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
int len = 9;
bubbleSort(a, len);

    // Print bubbleSorted array
    printf("Sorted Array: ");
    for(int i = 0; i < len; ++i)
    {
        printf("%d ", a[i]);
    }
}
