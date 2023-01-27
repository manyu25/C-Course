#include<stdio.h>
//Program to print sum of two mumbers (Without argument and without return value).
void sum()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    printf("The sum is %d.",a+b);
}
int main() {
    sum();
}
    