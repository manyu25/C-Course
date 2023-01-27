#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50], str2[50], str3[50];
    printf("Enter the string:");
    scanf("%s",&str1);
    printf("Enter the string:");
    scanf("%s",&str2);
    printf("\n");
    strcpy(str3, strcat(str1, str2));
    printf("The concatenated str3 is %s.", str3);
}