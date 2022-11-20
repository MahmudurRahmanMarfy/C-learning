#include <stdio.h>
int main()
{
    int size, i, j, temp, gap;

    printf("Size of the array : ");
    scanf("%d", &size);

    float array[size];

    for (i = 0; i < size; i++)
    {
        scanf("%f", &array[i]);
    }

    printf("Sorted array in shell style :\n");

    for (gap = size / 2; gap >= 1; gap /= 2)
    {
        for (j = gap; j < size; j++)
        {
            for (i = j - gap; i >= 0; i = i - gap)
            {
                if (array[i + gap] > array[i])
                {
                    break;
                }
                else
                {
                    temp = array[i + gap];
                    array[i + gap] = array[i];
                    array[i] = temp;
                }

            }
    
        } 
            
    }
    
    for(i=0; i<size; i++)
    {
        printf("%g ", array[i]);
    }

    return 0;
}