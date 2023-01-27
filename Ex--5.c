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
int printrevarray(int n, int array[])
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
        printf("Enter no. of elements of array:");
        scanf("%d",&n);
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            printf("Enter element %d:",i);
            scanf("%d",&a);
            arr[i]= a;
        }
        printf("\n");
        printf("Array input successfull.\n\n");
        printf("The Array is as follows:\n");
        printarray(n, arr);
        printf("The Array in reverse order is as follows:\n");
        printrevarray(n, arr);
        printf("\n");
        printf("Press 0 to EXIT.\n");
        printf("Press 1 to enter another array.\n");
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
            continue;
        }
        else
        {
            printf("Invalid Input!\n");
        }
    } 
}