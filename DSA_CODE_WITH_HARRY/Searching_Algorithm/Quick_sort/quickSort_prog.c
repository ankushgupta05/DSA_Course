/* In this quicksort program have one error is present that when array size 7 that output show wrong . */

#include <stdio.h>
#define size 100

void arrayElement(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int low, int high)
{
    int pivot;
    pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quicksort(int arr[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quicksort(arr, low, partitionIndex - 1);
        quicksort(arr, partitionIndex + 1, high);
    }
}

int main()
{
    int n;
    printf("Entre size of array :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array Element :-\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array Element Before performing quicksort operation.\n");
    arrayElement(arr, n);

    //  quicksort function
    quicksort(arr, 0, n);

    printf("Array Element after performing quicksort operation.\n");
    arrayElement(arr, n);

    return 0;
}
