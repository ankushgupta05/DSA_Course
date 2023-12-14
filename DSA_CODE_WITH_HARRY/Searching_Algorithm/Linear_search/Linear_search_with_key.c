#include <stdio.h>
#define size 5
int main()
{
    int arr[size], val, count = 0;
    printf("Enter Element  :-\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("Enter key value :");
    scanf("%d", &val);
    for (int i = 0; i < size; i++)
    {
        if (val == arr[i])
        {
            printf("Success\n");
            count = 1;
        }
    }
    if (count == 0)
        printf("Sorry key value is Not presenet");

    return 0;
}