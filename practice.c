//6. write a c program to reverse an array
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i;
    float array[n], temp;

    for(i=0; i<n; i++)
        {
            scanf("%f", &array[i]);
        }

    for(i=0; i<n/2; i++)
        {
            temp = array[i];
            array[i] = array[n-1-i];
            array[n-1-i] = temp;
        }

    printf("reversed array:\t");
    for(i=0; i<n; i++)
        {
            printf("%f ", array[i]);
        }
    return 0;
}
