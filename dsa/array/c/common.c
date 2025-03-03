#include "common.h"

void printline(int n)
{
    for(int i=1; i<=n; i++)
    {
        printf("-");
    }
    printf("\n");
}

void messagebox(char *message)
{
    int n = strlen(message);
    printline(n);
    printf(message);
    printf("\n");
    printline(n);
}

void title(char *title)
{
    int n = strlen(title);
    printf(title);
    printf("\n");
    printline(n);
}

void display(int *arr, int size)
{
    if (size == 0)
    {
        messagebox("Array Empty!");
        return;
    }

    title("Array Content:");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}