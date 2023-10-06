/*    Write a program to insert and delete element in a array and defind a switch case in a program ?  */

#include <stdio.h>

void insert_element()
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
}

void delete_by_position()
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
}

void delete_by_element()
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
}

int main()
{
    int botton;
    printf("Please Select below Any one option : \n\n");
    printf("1) insertion Element in array .\n");
    printf("2) delete Element in array .\n");
    scanf("%d", &botton);
    switch (botton)
    {
    case 1:
        insert_element();
        print("Thanks You ");
        break;
    case 2:
    {
        printf("Select option 1st or 2nd option :\n");
        printf("1) Delete element by using position of the array .\n");
        printf("2) Delete element by using element of the array .\n");
        int opts;
        scanf("%d", &opts); /*  */
        if (opts == 1)
        {
            delete_by_position();
            print("Thanks You ");
        }
        else
        {
            delete_by_element();
            print("Thanks You ");
        }
        break;
    }
    default:
        printf("sorry You have entered wrong key please try again .");
    }

    return 0;
}
