#include<stdio.h>
//Program to print sum of two mumbers (Without argument and with return value).
int sum()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    return a+b;
}
int main()
{
    int c;
    c=sum();
    printf("The sum is %d.",c);
}