#include <stdio.h>
int length()
{
    printf("Welcome to Length Converter\n");
    while (1)
    {
        int a;
        printf("_______________\n");
        printf("Press 1 for KMs to Mi\n");
        printf("Press 2 for In to Ft\n");
        printf("Press 3 for Cms to In\n");
        printf("Press 4 for In to Ms\n");
        printf("Press 5 to Go Back\n");
        printf("_______________\n");
        printf("Enter your choice:");
        scanf("%d", &a);

        if (a == 5)
        {
            break;
        }
        else if (a == 1)
        {
            float k;
            printf("Enter in Kms:");
            scanf("%f", &k);

            printf("In miles=%0.2f\n", k * 0.6214);
        }
        else if (a == 2)
        {
            float i;
            printf("Enter in Inches:");
            scanf("%f", &i);

            printf("In Foot=%0.2f\n", i * 0.0833);
        }
        else if (a == 3)
        {
            float cm;
            printf("Enter in Cms:");
            scanf("%f", &cm);

            printf("In inches=%0.2f\n", cm * 0.3937);
        }
        else if (a == 4)
        {
            float in;
            printf("Enter in Inches:");
            scanf("%f", &in);

            printf("In metres=%0.2f\n", in * 0.0254);
        }
        else
        {
            printf("Invalid input!\n");
        }
    }
}
int weight()
{
    printf("Welcome to Weight Converter\n");
    while (1)
    {
        printf("_______________\n");
        printf("Press 1 for Pound to KGs\n");
        printf("Press 2 for KGs to Pound\n");
        printf("Press 3 to Go Back\n");
        printf("_______________\n");
        int b;
        printf("Enter your choice:");
        scanf("%d", &b);

        if (b == 3)
        {
            break;
        }
        else if (b == 1)
        {
            float p;
            printf("Enter in Pounds:");
            scanf("%f", &p);

            printf("In Kgs=%0.2f\n", p * 0.4535);
        }
        else if (b == 2)
        {
            float kg;
            printf("Enter in KGs:");
            scanf("%f", &kg);

            printf("In pounds=%0.2f\n", kg * 2.2046);
        }
        else
        {
            printf("Invalid input!\n");
        }
    }
}
int main()
{
    while (1)
    {
        printf("UNIT CONVERTER\n");
        printf("_______________\n");
        printf("Press 1 for Length.\n");
        printf("Press 2 for Weight.\n");
        printf("Press 3 to Exit.\n");
        printf("_______________\n");
        int n;
        printf("Enter your choice:");
        scanf("%d", &n);
        if (n == 3)
        {
            printf("Thank You!");
            break;
        }
        else if (n == 1)
        {
            length();
        }
        else if (n == 2)
        {
            weight();
        }
        else
        {
            printf("Invalid input!\n");
        }
    }
}