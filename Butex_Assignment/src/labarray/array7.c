#include <stdio.h>
int main()
{
    int i, n, j;
    scanf("%d", &n);

    float array[n], temp;

    for (i = 0; i < n; i++)
    {
        scanf("%f", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 1 + i; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        printf("%f", array[i]);
    }
    return 0;
}