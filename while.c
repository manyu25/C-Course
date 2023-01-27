#include <stdio.h>
// Program to print squares of first twenty natural numbers.
int main()
{
    int i = 1;
    while (i <= 20)
    {
        printf("(%d)^2 = %d\n", i, (i * i));
        i = i + 1;
    }
    return 0;
}