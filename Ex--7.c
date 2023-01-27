#include <stdio.h>
#include <string.h>
// Input driver's details one by one by user.
struct Driver
{
    char name[50];
    char dl_no[25];
    char route[20];
    char kms[5];
};
int main()
{
    int n = 3;
    struct Driver D[n];
    printf("Welcome to Moto Travel Agency!\n\n");
    printf("Enter the drivers info of 3 drivers as asked below:\n\n");
    for (int i = 1; i <= n; i++)
    {
        printf("Enter Driver %d name : ", i);
        gets(D[i].name);

        printf("Enter D.L. No. of %s : ", D[i].name);
        gets(D[i].dl_no);

        printf("Enter Route of %s : ", D[i].name);
        gets(D[i].route);

        printf("Enter Kms driven by %s : ", D[i].name);
        gets(D[i].kms);

        printf("\n\n");
    }
    printf("\n");
    printf("The drivers Information is as follows:\n\n");
    for (int i = 1; i <= n; i++)
    {
        printf("Info of Driver %d is as follows: \n", i);
        printf("Name : %s\n", D[i].name);
        printf("D.L.No. : %s\n", D[i].dl_no);
        printf("Route : %s\n", D[i].route);
        printf("KMS Driven: %s\n", D[i].kms);
        printf("\n");
    }
    /*printf("NAME    , DL_No.    , Route    , Kms\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%s, %s, %s, %s", D[i].name, D[i].dl_no, D[i].route, D[i].kms);

        printf("\n");
    }*/
}
