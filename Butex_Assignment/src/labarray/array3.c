
#include <stdio.h>

int main()
{
    int i, n, count, key = 8, idx;
    scanf("%d", &n);

    float array[n];

    for (i = 0; i < n; i++)
    {
        scanf("%f", &array[i]);
    }

    count = 0;
    idx=0;
    
    for (i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            count++;
            idx=i;
        }
        
    }
    if (count == 0)
    {
        printf("Not found");
    }
    else
    {
        printf("It is found in index %d", idx);
    }

    return 0;
}