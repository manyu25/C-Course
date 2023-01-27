#include<stdio.h>

void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int x,y;
    printf("Enter first no.:\n");
    scanf("%d",&x);
    printf("Enter Second no.:\n");
    scanf("%d",&y);
    printf("\n");
    printf("First no. is %d and second no. is %d.\n\n",x,y);
    swap(&x,&y);
    printf("Now First no. is %d and second no. is %d.\n",x,y);
}