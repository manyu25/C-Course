#include<stdio.h>

int main() {
    int a;
    
    printf("In which subject have you passed?\n");
    printf("1) Maths & Science\n");
    printf("2) Science only\n");
    printf("3) Maths only\n");
    printf("Enter your input:\n");
    scanf("%d",&a);
    
    if (a==1)
    {
        printf("Congratulations! You won Rs 45.");
    }

    else if (a==2 || a==3)
    {
        printf("Congratulations! Your won Rs 15.");
    }

    else {
        printf("Wrong input!");
    }
    
}