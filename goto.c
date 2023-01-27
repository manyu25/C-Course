#include <stdio.h>
// Program to
int main()
{
    int age;

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0;; j++)
        {
            printf("Enter your age");
            scanf("%d", &age);
            if (age < 18)
            {
                goto end;
            }
            else
                printf("You are an adult.\n");
        }
    }
end:
    printf("You are a teenager.");
}