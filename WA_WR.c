#include<stdio.h>
// Program to print sum of two mumbers (With argument and with return value).
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    c=sum(a,b);
    printf("The sum is %d.",c);
}