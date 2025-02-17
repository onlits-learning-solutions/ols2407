#include "array-operations.h"

void display(int *arr, int size)
{
    if(size == 0)
    {
        printf("Array empty!\n");
        return;
    }

    printf("\nArray elements:\n");
    for(int i=0; i<size; i++)
        printf("%d\n", arr[i]);
}