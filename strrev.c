#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter the string:");
    gets(str);
    printf("\n");
    puts(str);
    printf("The reverse is %s.",strrev(str));
}