#include <stdio.h>

int main(void)
{
    char name[50];
    char gender[7];
    char address[100];

    printf("Enter full name: ");
    scanf("%[^\n]", name);
    printf("Enter gender: ");
    scanf("%s%*c", gender);
    printf("Enter address: ");
    scanf("%[^\n]", address);

    printf("The entered information is:\n");
    printf("Name: %s\n", name);
    printf("Gender: %s\n", gender);
    printf("Address: %s", address);

    return 0;
}