// Write a c program to calculate the sum of diagonal elements of a matrix.

#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int i, j;
    int array[row][col];
    int sum = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum = sum + array[i][j];
            }
        }
    }

    printf("sum of diagonal elements of a matrix = %d", sum);

    return 0;
}