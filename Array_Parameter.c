#include <stdio.h>
void printarray(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Array[%d]=%d\n", i, arr[i]);
    }
    printf("\n");
    arr[2] = 5; // If you change any value here, it will get reflected in main().
}
int main()
{
    int array[5] = {2, 4, 6, 8, 10};
    printarray(array);
    printf("\n");
    printf("After updating...\n");
    printarray(array);
}