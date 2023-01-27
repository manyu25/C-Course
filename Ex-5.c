#include <stdio.h>
int printarray(int n, int array[])
{
    for (int i = 1; i <= n; i++)
    {
        printf("Array[%d]=%d\n", i, array[i]);
    }
    printf("\n");
    return 0;
}
int prntrevarray(int n, int array[])
{
    for (int i = 1; i <= n; i++)
    {
        printf("Array[%d]=%d\n", i, array[n + 1 - i]);
    }
    printf("\n");
    return 0;
}
int main()
{
    int a, c, n;

    while (1)
    {
        printf("Enter no. of elements:");
        scanf("%d", &n);
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            printf("Enter element %d:", i);
            scanf("%d", &a);
            arr[i] = a;
        }
        printf("\n");
        printf("Array input successfull.\n");
        printf("Press 0 to EXIT.\n");
        printf("Press  1 to print array.\n");
        printf("Press  2 to print array in reverse order.\n");
        printf("\n");
        printf("Enter your choice:");
        scanf("%d", &c);
        printf("\n");
        if (c == 0)
        {
            break;
        }
        else if (c == 1)
        {
            printarray(n, arr);
        }
        else if (c == 2)
        {
            prntrevarray(n, arr);
        }
        else
        {
            printf("Invalid Input!\n");
        }
    }
}