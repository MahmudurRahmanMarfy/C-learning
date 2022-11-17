// Write a c program to multiply a matrix by a factor.

#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int i, j;
    int array[row][col];
    int k;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nMultiplying factor = ");
    scanf("%d", &k);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            array[i][j] = k * array[i][j];
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}