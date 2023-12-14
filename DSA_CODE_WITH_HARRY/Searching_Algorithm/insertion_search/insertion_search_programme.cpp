#include <stdio.h>
#define size 5

int main()
{
    int arr[size];
    printf("Enter array %d Element :- \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < size; i++)
    {
        int corrent = arr[i];
        int j = i - 1;
        while (arr[j] > corrent)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = corrent;
    }
    printf("After performing Insertion search the array Element is :-\n");
    for (int i = 0; i < size; i++)
    {
        printf("The Element at index [ %d ] is = %d \n", i, arr[i]);
    }

    return 0;
}