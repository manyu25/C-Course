#include <stdio.h>

int main()
{
    int a, b, c, n;
    printf("Enter coefficient of x^2:");
    printf("\n");
    scanf("%d", &a);
    printf("Enter coefficient of x:");
    printf("\n");
    scanf("%d", &b);
    printf("Enter coefficient of 1:");
    printf("\n");
    scanf("%d", &c);
    printf("\n");
    printf("\n");
    if (a == 0)
    {
        printf("Quadratic Equation does not exist!");
    }
    else
    {
        printf("Your input equation is as follows:\n");
        printf("%dx^2 + %dx + %d", a, b, c);
    }
    printf("\n");
    while (1)
    {
        printf("Do you want to check nature of roots?\n");
        printf("Press 1 for Yes!\n");
        printf("Press 2 for No!\n");
        printf("Enter your choice:\n");
        scanf("%d", &n);
        printf("\n");
        if (n == 2)
        {
            break;
        }
        else if (n==1)
        {
            int D=b*b-(4*a*c);
            if (D<0)
            {
                printf("Imaginary Roots!\n");
                break;
            }
            else if (D=0)
            {
                printf("Real and Equal Roots!\n");
                break;
            }
            else
            {
                printf("Real and Distinct Roots!\n");
                break;   
            }
            
            
        }
        else
        {
            printf("Invalid input!\n");
        }
        
    }
}