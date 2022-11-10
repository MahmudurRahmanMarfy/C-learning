#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    float array[n], barray[n];

    for (i = 0; i < n; i++)
    {
        scanf("%f", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        barray[i] = array[n - 1 - i];
        array[i] = barray[i];
        printf("array=%f\t", array[i]);
    }
    return 0;
}