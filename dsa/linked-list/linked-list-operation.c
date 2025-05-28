#include "common.h"

int main(int argc, char const *argv[])
{
    NODE *head = NULL;
    int ch;
    while (1)
    {
        messagebox("MAIN MENU");
        printf("1. Display\n");
        printf("2. Insert\n");
        printf("3. Sort\n");
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
            display(head);
            break;
        case 2:
            insertmenu(&head);
            messagebox("Under Construction!");
            break;
        case 3:
            // sortmenu(head);
            messagebox("Under Construction!");
            break;
        case 4:
            // searchmenu(head);
            messagebox("Under Construction!");
            break;
        default:
            messagebox("Invalid Option!");
            break;
        }
    }
    return 0;
}
