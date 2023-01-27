#include<stdio.h>
#include<string.h>

int main()
{
    char arr[20];
    char str[20];
    char array[50];
    printf("Enter the string:");
    gets(arr);
    printf("Enter the string:");
    gets(str);
    printf("\n");
    printf("You have entered:");
    puts(arr);
    printf("You have entered:");
    puts(str);
    printf("\n");
    printf("The concatenated string is:");
    strcpy(array,strcat(arr, str));
    puts(array);
    printf("\n");
    printf("The length of concatenated string is %d.",strlen(array));
    printf("\n");
    printf("The revese of concatenated string is:");
    strrev(array);
    puts(array);
    printf("\n");
    printf("The comparison result of strings is %d.",strcmp(arr, str));
}