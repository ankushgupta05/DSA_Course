#include <stdio.h>
#define size 5

int sort(int arr[], int n, int key)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1 + i; j < n; j++)
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
        int LB = 0, UB = n - 1;
        int mid;
        while (LB <= UB)
        {
            mid = (LB + UB) / 2;
            if (key == arr[mid])
                return 1;
            else if (arr[mid] > key)
                UB = mid - 1;
            else if (arr[mid] < key)
                LB = mid + 1;
        }
        return 0;
    }
}

int main()
{
    int arr[size], val, count = 0;
    printf("Enter Element  :-\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("Enter key value :");
    scanf("%d", &val);
    if (sort(arr, size, val))
        printf("Success the key value exit in array .\n");
    else
        printf("Sorry key value is Not exit in array .\n");

    return 0;
}