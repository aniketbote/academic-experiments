#include<stdlib.h>
#include<stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
int partition(int arr[], int l, int h)
{
    int pivot;
    int i,j;
    pivot=arr[h];
    i=l-1;
    for(j=l;j<h;j++)
    {
        if(arr[j]<=pivot)
        {
            i=i+1;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return i+1;

}
void quickSort(int arr[], int l, int h)
{
    int p;
    if (l < h)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        p=partition(arr, l,h);

        // Sort first and second halves
        quickSort(arr, l, p-1);
        quickSort(arr, p+1, h);

        //merge(arr, l, m, r);
    }
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

/* Driver program to test above functions */
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    quickSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}

