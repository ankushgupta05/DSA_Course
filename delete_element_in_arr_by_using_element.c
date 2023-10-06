#include <stdio.h>
int main()
{
    int arr[100];
    int n, x;
    int count = 0, Temp = 0;
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
    printf("Enter delete Element  which present in a  array :");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count = 1;
        }
    }
    if (count == 0)
    {
        printf("already Your element not present in a array ??");
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == x)
            {
                Temp = i + 1;
                arr[i] = arr[i + 1];
            }
            else if (Temp > 0)
            {
                arr[i] = arr[i + 1];
            }
        }
        printf("After deleting element in a array :\n");
        for (int i = 0; i < n - 1; i++)
        {
            printf("[%d] =  %d\n", i, arr[i]);
        }
    }
    return 0;
}
