#include <stdio.h>
// Program to print an A.P. upto n terms.
int main()
{
    int a, d, n, i;

    printf("Enter first term:");
    scanf("%d", &a);

    printf("Enter common difference:");
    scanf("%d", &d);

    printf("Enter no of terms:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d,", a + (i - 1) * d);
    }
}