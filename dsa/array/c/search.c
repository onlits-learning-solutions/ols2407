#include "common.h"

void searchmenu(int *arr, int size)
{
    int ch;

    if(size == 0)
    {
        messagebox("Array empty!");
        return;
    }

    while (1)
    {
        messagebox("SEARCH MENU");
        printf("1. Linear Search\n");
        printf("2. Binary Search\n");
        printf("Enter choice [0 to exit]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            return;
            break;
        case 1:
            linearsearch(arr, size);
            break;
        case 2:
            binarysearch(arr, size);
            break;
        default:
            messagebox("Invalid Option!");
            break;
        }
    }
}

void linearsearch(int *arr, int size)
{
    int key;

    printf("Enter search value: ");
    scanf("%d", &key);

    for(int i=0; i<size; i++)
    {
        if(key == arr[i])
        {
            printf("%d found at index %d\n", key, i);
            return;
        }
    }

    printf("%d not found\n", key);
}

void binarysearch(int *arr, int size)
    {
        if (size < 2) {
            printf("\nAt least two elements are required to perform search\n");
            return;
        }
    
        int target;
        printf("Enter search value: ");
        scanf("%d", &target);
    
        int low = 0, high = size - 1, mid, guess;
    
        while (low <= high) {
            mid = low + (high - low) / 2;
            guess = arr[mid];
    
            if (guess == target) {
                printf("\nThe number %d is at index %d\n", target, mid);
                return;
            } 
            if (guess > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
    
        printf("\n%d does not exist in array\n", target);
    
}