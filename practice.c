#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array you want to make:");
    scanf("%d", &n);
    int array[n];
    int a;
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value:");
        scanf("%d", &a);
        array[i] = a;
    }
    printf("Array input completed!\n\n");
    int i;
    while (i = 1)
    {
        int c;
        printf("Press 1 to print array!\n");
        printf("Press 2 to print value!\n");
        printf("Press 3 to Exit!\n\n");
        printf("Enter the choice:\n");
        scanf("%d", &c);

        if (c == 3)
        {
            break;
        }
        else if (c == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                printf("Array[%d]=%d\n\n", i, array[i]);
            }
        }
        else if (c == 2)
        {
            int b;
            printf("Enter the serial no.:\n");
            scanf("%d",&b);
            if (b>n)
            {
                printf("Enter valid value.\n");
            }
            else
            {
                printf("Array[%d]:%d\n\n", b, array[b]);
            }
        }
        else
        {
            printf("Invalid input!\n\n");
        }
    }
}
