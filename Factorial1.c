#include<stdio.h>
// Program to print factorial of a number entered by user using iteration.
int factorial(int num)
{
    if (num == 0 || num==1)
    {
        return 1;
    }
    else
    {
        int i=1;
        int s=1;
        while (i<=num)
        {
            s=s*num*i;
        }
        return s;
    }
}
int main()
{
    int a;
    printf("Enter number you want factorial of:\n");
    scanf("%d", &a);

    printf("The factorial of %d is %d.", a, factorial(a));
}