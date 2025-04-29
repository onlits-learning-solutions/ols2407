#include "common.h"

void sortmenu(int *arr, int size)
{
    int ch;

    if(size == 0)
    {
        messagebox("Array empty!");
        return;
    }

    while (1)
    {
        messagebox("SORT MENU");
        printf("1. Selection Sort\n");
        printf("2. Bubble Sort\n");
        printf("Enter choice [0 to exit]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            return;
            break;
        case 1:
            selectionsort(arr, size);
            break;
        case 2:
            bubblesort(arr, size);
            break;
        default:
            messagebox("Invalid Option!");
            break;
        }
    }
}

void selectionsort(int *arr, int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
    
}
void bubblesort(int *arr, int size)
{
    
}