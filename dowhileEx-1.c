#include <stdio.h>
// Program to print multiplication table of an entered number using do while loop.
int main()
{
    int num;

    printf("Enter the number you want multiplication table of:");
    scanf("%d", &num);

    int i = 1;
    do
    {
        printf("%d * %d = %d\n", num, i, (num * i));
        i = i + 1;
    } while (i <= 10);
}