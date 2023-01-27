#include<stdio.h>
int main()
{
    int x,y,a,b,c,e;

    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    if (a>b)
    {
        x=a;
        y=b;
    }
    else
    {
        x=b;
        y=a;
    }
    e=x*y;
    while (1)
    {
        c=x%y;
        if(c==0)
        {
            printf("G.C.D.= %d\n",y);
            printf("L.C.M.= %d",e/y);
            break;
        }
        else
        {
            x=y;
            y=c;
            
        }
    }
}