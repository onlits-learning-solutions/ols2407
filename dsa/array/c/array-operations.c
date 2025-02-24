#include <stdio.h>
#define MAX 100
void display(int *arr, int size);
int main(int argc, char const *argv[])
{
    int arr[MAX], size = 0;
    display(arr, size);
    return 0;
}

void display(int *arr, int size)
{
    if (size == 0)
    {
        printf("Array Empty!");
        return;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}