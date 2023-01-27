#include<stdio.h>
//Program to print sum of two mumbers (With argument and without return value).
void sum(int a,int b)
{
    printf("The sum is %d.",a+b);
}
int main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    sum(a,b);
}