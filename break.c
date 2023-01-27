#include <stdio.h>
// Program to take age as input and if age < 18 then terminate.
int main()
{
    int age, i;

    for (i = 0;;)
    {
        printf("Enter your age:");
        scanf("%d", &age);

        if (age < 18)
        {
            printf("You can't drive.");
            break;
        }
        else
        {
            printf("You can drive.\n");
        }
    }
}