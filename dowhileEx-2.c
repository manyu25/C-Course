#include <stdio.h>
// Program to print sum of numbers entered by user.
int main()
{
    int num;
    int sum = 0;

    do
    {
        printf("Enter number:");
        scanf("%d", &num);

        sum = sum + num;
    } while (num != 0);
    printf("Sum is %d.\n", sum);
}