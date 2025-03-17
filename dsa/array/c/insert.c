#include "common.h"

void insertmenu(int *arr, int *size)
{
    int ch;
    while (1)
    {
        messagebox("INSERT MENU");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at the Index\n");
        printf("Enter choice [0 to exit]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            return;
            break;
        case 1:
            insertbeginning(arr, size);
            break;
        case 2:
            insertend(arr, size);
            break;
        case 3:
            insertindex(arr, size);
            break;
        default:
            messagebox("Invalid Option!");
        }
    }
}

void insertbeginning(int *arr, int *size)
{
    if (*size >= MAX)
    {
        messagebox("Array overflow!");
        return;
    }

    printf("Enter value: ");

    if (*size == 0)
    {
        scanf("%d", &arr[*size]);
    }
    else
    {
        for (size_t i = *size; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        scanf("%d", &arr[0]);
    }
    (*size)++;
    messagebox("Value inserted!");
}


void insertindex(int *arr, int *size){
    int index, value;

    printf("Enter index: ");
    scanf("%d", &index);

    if (index < 0 || index > *size)
    {
        messagebox("Invalid index!");
        return;
    }

    if (*size >= MAX)
    {
        messagebox("Array overflow!");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &value);

    for (int i = *size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    (*size)++;
    messagebox("Value inserted!");

}

void insertend(int *arr, int *size)
{
    if (*size >= MAX)
    {
        messagebox("Array overflow!");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &arr[*size]);
    (*size)++;
    messagebox("Value inserted!");
}