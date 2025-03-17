#include "common.h"

int main(int argc, char const *argv[])
{
    int arr[MAX], size = 0, ch;
    while (1)
    {
        messagebox("MAIN MENU");
        printf("1. Display\n");
        printf("2. Insert\n");
        printf("4. Search\n");
        printf("Enter choice [0 to exit]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            messagebox("Bye!");
            return 0;
            break;
        case 1:
            display(arr, size);
            break;
        case 2:
            insertmenu(arr, &size);
            break;
        case 4:
            searchmenu(arr, size);
            break;
        default:
            messagebox("Invalid Option!");
            break;
        }
    }
    return 0;
}
