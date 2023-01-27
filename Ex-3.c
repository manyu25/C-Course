#include <stdio.h>
// Program to print fibonacci series using recursion.
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int a;
    printf("Enter number of terms:\n");
    scanf("%d", &a);
    printf("Fibonacci series is as follows:\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d, ", fibonacci(i));
    }
    printf("...");
}