#include<stdio.h>
int main() {
    int num;
    
    printf("Enter number you want multiplication table of:");
    scanf("%d",&num);

    printf("Multiplication Table of %d is as follows:\n",num);

    for (int i = 1; i <=10; i++)
    {
        printf("%d X %d = %d\n",num,i,(num*i));
    }
    
}