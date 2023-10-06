#include <stdio.h>
int main()
{
    int arr[100];
    int n, pos;
    printf("Enter number of Element in an array :");
    scanf("%d", &n);
    printf("Enter array Element :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("You have Entered Element in a array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("[%d] = [%d]\n", i, arr[i]);
    }
    printf("Enter delete  position of Element  in a  array :");
    scanf("%d", &pos);
    if (pos - 1 > n)
    {
        printf("You have Entered wrong possition bcz position does not exit in array ??");
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (pos - 1 <= i)
            {
                arr[i] = arr[i + 1];
            }
            else
            {
                continue;
            }
        }
        printf("After deleting position in a array  :\n");
        for (int i = 0; i < n - 1; i++)
        {
            printf("[%d] =  %d \n", i, arr[i]);
        }
    }
    return 0;
}