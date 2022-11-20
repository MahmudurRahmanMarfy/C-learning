//  Write a program in C to display n terms of natural numbers and their sum.

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
        printf("%d\n", i);
    }
    printf("%d", sum);
    return 0;
}