#include "common.h"

void insertmenu(NODE **head)
{
    int ch;
    while (1)
    {
        messagebox("INSERT MENU");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert before\n");
        printf("4. Insert after\n");
        printf("Enter choice [0 to exit]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            return;
            break;
        case 1:
            *head == NULL ? insertfirst(head) : insertbeginning(head);
            break;
        case 2:
            insertend(head);
            break;
        case 3:
            insertindex(head);
            break;
        default:
            messagebox("Invalid Option!");
        }
    }
}

void insertfirst(NODE **head)
{
    int data;
    printf("Enter value to insert: ");
    scanf("%d", &data);
    *head = (NODE *)malloc(sizeof(NODE));
    (*head)->data = data;
    (*head)->next = NULL;
    messagebox("Value inserted!");
}

void insertbeginning(NODE **head)
{
    
    messagebox("Value inserted!");
}


void insertindex(NODE **head){
    
    messagebox("Value inserted!");

}

void insertend(NODE **head)
{
   
    messagebox("Value inserted!");
}