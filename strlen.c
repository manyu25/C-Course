#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter the string:");
    gets(str);
    printf("\n");
    printf("The length of %s is %d.",str,strlen(str));
}