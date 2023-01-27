#include <stdio.h>
// Program to print average of entered marks of students.
int main()
{
    int num, m;
    printf("Enter no of students:");
    scanf("%d", &num);

    int sum = 0;
    int i = 1;
    while (i <= num)
    {
        printf("Enter marks:");
        scanf("%d", &m);
        sum = sum + m;
        i = i + 1;
    }
    printf("The average of marks obtained is %d.", sum / num);
}
