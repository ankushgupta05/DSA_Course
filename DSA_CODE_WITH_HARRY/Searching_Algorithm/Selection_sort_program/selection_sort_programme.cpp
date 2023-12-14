#include <stdio.h>
#define size 5

int main()
{
    int arr[size];
    printf("Enter array  %d Element :-\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 1 + i; j < size; j++)
        {

            if (arr[j] > arr[i])
                continue;
            else
            {
                int Temp;
                Temp = arr[j];
                arr[j] = arr[i];
                arr[i] = Temp;
            }
        }
    }

    printf("After performing Insertion search the array Element is :-\n");
    for (int i = 0; i < size; i++)
    {
        printf("The Element at index [ %d ] is = %d \n", i, arr[i]);
    }
    return 0;
}