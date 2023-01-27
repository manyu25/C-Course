#include<stdio.h>

int main()
{
    int n, c, count, d, x=0;
    printf("Enter n:");
    scanf("%d",&n);

    for (int i = 0; i <= n; i++)
    {
        c=i%10;
        d=i/10;
        if (c==3 || d==3)
        {
            count+=1;
        }
        else
        {
            c=c%10;
            d=d/10;
        }
          
    }
    

    printf("%d",count);
}
