#include <stdio.h>
// Program to print Star Pattern.
void Ltri(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void Utri(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int a, c;
    while (1)
    {
        printf("Press 1 to print Lower Triangular Star Pattern.\n");
        printf("Press 2 to print Upper Triangular Star Pattern.\n");
        printf("Press 3 to exit.\n\n");
        printf("Enter your choice:\n\n");
        scanf("%d", &c);

        if (c == 3)
        {
            printf("Thank you!");
            break;
        }
        else if (c == 1)
        {
            printf("Enter the no. of rows :\n");
            scanf("%d", &a);
            printf("Lower Triangular Star Pattern of %d rows is as follows:\n",a);
            Ltri(a);
        }
        else if (c == 2)
        {
            printf("Enter the no. of rows :\n");
            scanf("%d", &a);
            printf("Upper Triangular Star Pattern of %d rows is as follows:\n",a);
            Utri(a);
        }
        else
        {
            printf("Invalid Input!\n\n");
        }
    }
}