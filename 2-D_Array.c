#include <stdio.h>
// Program to print a martrix of order entered by user.
int main()
{
    int m, n;
    printf("Enter no. of rows:\n");
    scanf("%d", &m);

    printf("Enter no. of columns:\n");
    scanf("%d", &n);

    int matrix[m][n];
    int a;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("Enter element a(%d%d):\n", i,j);
            scanf("%d", &a);
            matrix[i][j]=a;
        }
    }
    printf("Elements entered successfully!\n");
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}