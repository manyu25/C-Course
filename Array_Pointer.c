#include <stdio.h>
void Pointarray(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("Array[%d]=%d\n", i, *(ptr + i));
    }
    printf("\n");
    *(ptr + 2) = 10; // If you change any value here, it will get reflected in main().
}
int main()
{
    int arr[5] = {3, 6, 9, 12, 15};
    Pointarray(arr);
    printf("\n");
    printf("After updating...\n");
    Pointarray(arr);
}