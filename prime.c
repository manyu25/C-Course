#include<stdio.h>

int main()
{
    int a, b=0;
    printf("Enter the number:");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
            b+=1;
        } 
    }
    if (b==2)
    {
        printf("The number is prime.");
    }
    else
    {
        printf("The number is composite");
    }
}