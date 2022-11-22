#include <stdio.h>
int main()
{
    int i, j, row1, row2, col1, col2, k;
    printf("Enter the rows and columns of matrix A :");
    scanf("%d%d", &row1, &col1);
    int matA[row1][col1];
    printf("enter the value of A matrix");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Enter the rows and columns of matrix B :");
    scanf("%d%d", &row2, &col2);
    printf("enter the value of B matrix");
    int matB[row2][col2];
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }

    int matc[row1][col2];
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            matc[i][j] = 0;
            for (k = 0; k < row2; k++)
            {
                matc[i][j] = matc[i][j] + matA[i][k] * matB[k][j];
            }
        }
    }
    printf("multiplication of matrix A and B\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", matc[i][j]);
        }
        printf("\n");
    }
    return 0;
}