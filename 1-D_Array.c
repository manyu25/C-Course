#include <stdio.h>
// Program to take input as marks of student and print the desired marks.
int main()
{
    int n;
    printf("Enter no. of students:\n");//heyy
    scanf("%d", &n);

    printf("Total no. of students is %d.\n", n);
    int array[n];
    for (int i = 1; i <= n; i++)
    {
        int m;
        printf("Enter marks of Roll No. %d:\n", i);
        scanf("%d", &m);
        array[i] = m;
    }
    printf("Marks uploaded succesfully!\n");
    /*int a=1;
    while (a<=n)
    {
        printf("The marks of student with Roll no. %d is %d:\n",a,array[a]);
        a=a+1;
    }*/
    
    for (int i = 0;;)
    {
        printf("Do you want to check marks?\n");
        printf("Press 1 for Yes!\n");
        printf("Press 2 for No!\n");

        int c;
        printf("Enter your choice:\n");
        scanf("%d", &c);

        if (c == 2)
        {
            break;
        }
        else if (c == 1)
        {
            int a;
            printf("Enter Roll no.:\n");
            scanf("%d", &a);

            if (a>=1 && a<=n)
            {
                printf("The marks of student with Roll no. %d is %d:\n",a,array[a]);
            }
            else
            {
                printf("Invalid input!\n");
            }
        }
        else
        {
            printf("Try again!\n");
        }
    }
}
