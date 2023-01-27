#include<stdio.h>
int returnvalue()
{
    static int i;
    i++;
    return i;
}
int main()
{
    printf("The value of i is %d.\n",returnvalue());
    printf("The updated value of i is %d.",returnvalue());
}