#include<stdio.h>

int main() 
{
    int a;
    printf("Enter your age\n");
    scanf("%d",&a);

    printf("You have entered %d as your age.\n",a);
    if (a>=18)
    {
        printf("You can vote!\a");
    }
    else 
    {
        printf("You can not vote!");
    }    
    return 0;
}