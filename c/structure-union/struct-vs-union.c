#include <stdio.h>

typedef struct
{
    char model[20];
    int color;
    float price;
} CAR;

typedef union var
{
    int a;
    float b;
    char c;
} VAR;

int main(void)
{
    CAR c;
    union var v;
    printf("The size of c is %ld bytes.\n", sizeof(c));
    printf("The size of v is %ld bytes.\n", sizeof(v));
    v.a = 10;
    v.b = 100.5F;
    v.c = 'a';
    printf("The value of v.a is %d.\n", v.a);
    printf("The value of v.b is %f.\n", v.b);
    printf("The value of v.c is %d.\n", v.c);
    return 0;
}