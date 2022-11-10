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
        barray[i]=array[i];
        printf("Barray=%f\t", barray[i]);
    }

    return 0;
}