//  Write a c program to transpose a matrix, i.e., A’. Given, A = {{1, 2}, {2, 4}}.
#include <stdio.h>
int main()
{
    int i, j, row, col;
    scanf("%d%d", &row, &col);

    float array[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%f", &array[i][j]);
        }
    }

    float tarray[col][row];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            tarray[j][i] = array[i][j];
        }
    }

    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("% ", tarray[i][j]);
        }
        printf("\n");
    }

    return 0;
}