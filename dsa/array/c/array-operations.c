#include "array-operations.h"

int main(int argc, char const *argv[])
{
    int ch, arr[MAX], size = 0;
    while (1)
    {
        printf("Main Menu\n");
        printf("1. Display\n");
        printf("2. Insert\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            return 0;
            printf("Bye!");
            break;
        case 1:
            display(arr, size);
            break;
        default:
            printf("Invalid option!\n");
            break;
        }
    }
    return 0;
}