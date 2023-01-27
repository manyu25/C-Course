#include <stdio.h>
// Program to print nth term of fibonacci series using iteration.
int main()
{
    int a = 0, b = 1, n;
    printf("Enter the term you want to print:");
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    printf("The term %d is %d.", n, a);
}