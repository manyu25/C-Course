#include<stdio.h>

int main() {
    int age, marks;

    printf("Enter your age:\n");
    scanf("%d",&age);

    switch (age)
    {
    case 18:
        printf("Your age is 18\n");
        printf("Enter your marks:\n");
        scanf("%d",&marks);
        switch (marks)
        {
        case 90:
            printf("Congrats! You have topped the +2 exam.");
            break;
        case 33:
            printf("You have failed the +2 exam.");
            break;
        
        default:
            printf("Congrats! You have passed the +2 exam.");
            break;
        }
        break;
    
    default:
        printf("Your age is either less or more than 18.\n");
        break;
    }
}