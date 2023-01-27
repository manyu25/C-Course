#include <stdio.h>
// Program to print all natural numbers upto the number entered by user.
int main()
{
    int num;
    int i = 1;

    printf("Enter number:");
    scanf("%d", &num);

    if (num != 0)
    {
        do
        {
            printf("%d\n", i);
            i = i + 1;
        } while (i <= num);
    }
    else
        printf("%d\n", 0);
}