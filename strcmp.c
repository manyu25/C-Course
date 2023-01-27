#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50], str2[50];
    printf("Enter the string:");
    scanf("%s",&str1);
    printf("Enter the string:");
    scanf("%s",&str2);
    printf("\n");
    printf("The comparison result is %d.", strcmp(str1, str2));
}