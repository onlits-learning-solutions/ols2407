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

void display(NODE *head)
{
    if (head == NULL)
    {
        messagebox("List Empty!");
        return;
    }

    title("List Content:");
    NODE *itr = head;
    while (itr != NULL)
    {
        printf("%d\n", itr->data);
        itr = itr->next;
    }
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}