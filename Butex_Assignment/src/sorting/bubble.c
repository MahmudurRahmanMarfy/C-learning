#include <stdio.h>
int main()
{
    int size, i, j, temp;

    printf("Size of the array : ");
    scanf("%d", &size);

    float array[size];

    for (i = 0; i < size; i++)
    {
        scanf("%f", &array[i]);
    }

    printf("Sorted array :\n");
    
    for (i = 0; i < size; i++)
    {
        for (j = 1 + i; j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        printf("%g ", array[i]);
    }

    return 0;
}