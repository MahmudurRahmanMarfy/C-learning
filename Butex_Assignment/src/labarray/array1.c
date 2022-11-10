// 1. write a c program to calculate sum and average of an array
#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    float array[n], avg, sum = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%f", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }

    avg = sum / n;
    printf("Sum = %f\nAverage = %f", sum, avg);

    return 0;
}