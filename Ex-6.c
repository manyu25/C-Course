#include<stdio.h>
#include<string.h>
// Program to print parsed string.
void parser(char *str)
{
    int in=0; //Variable to track whether we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == '<')
        {
            in = 1;
            continue;
        }
        else if(str[i]=='>')
        {
            in = 0;
            continue;
        }
        if(in==0)
        {
            str[index] = str[i];
            index ++;
        }
    }
    str[index] = '\0';   
    //Remove the trailing spaces from the beginning
    while (str[0] == ' ')
    {
        for (int j = 0; j < strlen(str); j++)
        {
            str[j]=str[j+1];
        }
    }
    //Remove the trailing spaces from the end
    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }   
}
int main()
{
    char string[] = "    <h1>     This is the heading.     </h1>  ";
    parser(string);
    printf("The parsed string is ~~%s~~", string);
    return 0;
}
/*
Input:
<h1> This is the heading </h1>

Output:
This is the heading
*/