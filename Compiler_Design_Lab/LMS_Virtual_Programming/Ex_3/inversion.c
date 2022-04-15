/*
Question:
Write a c program for count inversion in a given array
*/

#include <stdio.h>
#include <stdlib.h>
int getInvCount(int arr[], int n)
{
    int inv_count = 0, i = 0, j = 0;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;

    return inv_count;
}

int main()
{
    int arr[] = {1, 20, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The number of inversions are %d \n", getInvCount(arr, n));
    return 0;
}
