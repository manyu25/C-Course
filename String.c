#include<stdio.h>
void printname(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }   
}
int main()
{
    char arr[]={'a', 'n', 'm', 'o', 'l', '\0'};
    printname(arr);
}