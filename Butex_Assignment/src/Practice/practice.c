/*

n^2=5000
n(=ve) er highest
n(-ve) er lowest

*/ 


#include <stdio.h>

int main()
{
    int i, a, b, diff, sqrt=5000;

    for(i=0; i*i<=sqrt; i++)
    {
        a=i;
    }
    printf("a=%d\n", a);

    for(i=0; i*i<=sqrt; i--)
    {
        b=i;
    }
    printf("b=%d\n", b);

    diff=a-b;
    printf("diff=%d", diff);

   return 0;
}
