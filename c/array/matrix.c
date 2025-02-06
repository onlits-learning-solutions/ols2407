#include <stdio.h>

int main(void)
{
    int matrix[3][3];
    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("[%d][%d]. ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}