#include "array-operations.h"

void display(int *arr, int size)
{
    if(size == 0)
    {
        messagebox("Array empty!");
        return;
    }

    printf("\nArray elements:\n");
    for(int i=0; i<size; i++)
        printf("%d\n", arr[i]);
}

void printline(int n)
{
    for(int i=1; i<=n; i++)
        printf("=");
    printf("\n");
}

void messagebox(char *message)
{
    int len = strlen(message);
    printf("\n");
    printline(len);
    printf("%s\n", message);
    printline(len);
    printf("\n");
}