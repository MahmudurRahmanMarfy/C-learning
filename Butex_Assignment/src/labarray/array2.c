#include <stdio.h>
int main()
{
    int i, n, max, min, idx;
    scanf("%d", &n);
    float array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%f", &array[i]);
    }

    max = array[0];
    idx = 0;

    for (i = 1; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            idx = i;
        }
    }
    printf("Max=%d\tIndex=%d\n", max, idx);

    min = array[0];
    idx = 0;

    for (i = 1; i < n; i++)
    {
        if (min > array[i])
        {
            min = array[i];
            idx = i;
        }
    }
    printf("Min=%d\tIndex=%d", min, idx);

    return 0;
}
