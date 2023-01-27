#include<stdio.h>

int main()
{
    int a=5;
    int* ptra=&a;
    int* ptr=NULL;
    printf("The value of a is %d.(From initialized value.)\n",a);
    printf("The value of a is %d.(From pointer to a.)\n\n",*ptra);

    printf("The address of a is %x.(From initialized value.)\n",&a);
    printf("The address of a is %x.(From pointer to a.)\n\n",ptra);

    printf("The address of pointer to a is %x.\n\n",&ptra);
    printf("The address of some garbage is %p.",ptr);
    return 0;
}