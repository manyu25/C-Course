#include<stdio.h>

int main()
{
    int array[5]={5,1,2,3,4};
    printf("The value of 1st element is %d\n",array[0]);
    printf("The value of 1st element is %d\n\n",*(array));

    printf("The address of 1st element is %d\n",&array[0]);
    printf("The address of 1st element is %d\n",array);

    printf("The address of 2nd element is %d\n",&array[1]);
    printf("The address of 2nd element is %d\n\n",array+1);

    printf("The value of 5th element is %d\n",array[4]);
    printf("The value of 5th element is %d\n\n",*(array+4));

    printf("Size of int in this architecture is %d",sizeof(array[0]));
}