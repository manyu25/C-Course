#include<stdio.h>
int addsub(int *x,int *y)
{
    int add,sub;
    add=*x+*y;
    sub=*x-*y;
    *x=add;
    *y=sub;
}
int main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("\n");
    printf("Enter b:");
    scanf("%d",&b);
    printf("\n");
    printf("The value of a is %d and value of b is %d.\n\n",a,b);
    addsub(&a,&b);
    printf("The updated value of a is %d and updated value of b is %d.\n",a,b);
}