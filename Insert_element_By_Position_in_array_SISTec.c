#include <stdio.h>
int main()
{
    int arr[100];
    int n, x, pos;
    printf("Enter number of Element in an array :");
    scanf("%d", &n);
    printf("Enter array Element :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array Elemnt thoes You have Entered  :\n");
    for (int i = 0; i < n; i++)
    {
        printf("[%d] =  %d \n", i, arr[i]);
    }
    printf("Enter insert array Element in array :");
    scanf("%d", &x);
    printf("Enter position of the insert  Element in a array  :");
    scanf("%d", &pos);
    n = n + 1;
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
        if (pos == i)
        {
            arr[pos - 1] = x;
            break;
        }
    }
    printf("After inserted Element in a array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("[%d] =  %d\n", i, arr[i]);
    }
    return 0;
}