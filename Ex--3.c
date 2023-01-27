#include <stdio.h>
// Program to print nth term of fibonacci series using recursion.
int fibonacci(int n)
{
    if (n==1 || n==2)
    {
        return n-1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int a;
    printf("Enter term:\n");
    scanf("%d", &a);
    printf("Term no. %d is %d",a,fibonacci(a));
}