// Write a c program to find the both values and indexes of maximum and minimum elements of a 2D array.

#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int i, j, max, min, ind1, ind2;
    float array[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%f", &array[i][j]);
        }
    }

    max = array[0][0];
    ind1 = 0;
    ind2 = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
                ind1 = i;
                ind2 = j;
            }
        }
    }
    printf("Max = %d\tIndex = %d %d\n", max, ind1, ind2);

    min = array[0][0];
    ind1 = 0;
    ind2 = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (array[i][j] < min)
            {
                min = array[i][j];
                ind1 = i;
                ind2 = j;
            }
        }
    }
    printf("Min = %d\tIndex = %d %d", min, ind1, ind2);

    return 0;
}