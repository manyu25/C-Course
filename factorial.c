#include <stdio.h>
// Program to print factorial of any number entered by user using recursion.
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int main()
{
    int a;
    printf("Enter number you want factorial of:\n");
    scanf("%d", &a);

    printf("The factorial of %d is %d.", a, factorial(a));
}
