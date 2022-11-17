// write a c program to calculate the sum and average of a 2D array.

#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int i, j;
    int array[row][col];
    float sum = 0, avg;

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
            sum = sum + array[i][j];
        }
    }

    avg = sum / (i * j);

    printf("Sum = %f\nAverage = %f", sum, avg);

    return 0;
}