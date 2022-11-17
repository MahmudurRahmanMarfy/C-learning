//  Write a c program to subtract two matrices. If A and B are two matrices, the difference of these matrices, C = A - B.
#include <stdio.h>
int main()
{
    int i, j, row, col;
    scanf("%d%d", &row, &col);

    float array[row][col];
    printf("A matrix");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%f", &array[i][j]);
        }
    }

    float barray[row][col];
    printf("B matrix");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%f", &barray[i][j]);
        }
    }

    float carray[row][col];
    printf("C matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            carray[i][j] = array[i][j] - barray[i][j];
            printf("%g ", carray[i][j]);
        }
        printf("\n");
    }

    return 0;
}