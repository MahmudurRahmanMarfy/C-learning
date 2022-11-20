//  Write a program in C to display the cube of the number upto given an integer.

#include <stdio.h>
#include <math.h>

int main()
{
	int n, i;
	double value;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		value = pow(i, 3);
		printf("%d^3=%lf\n", i, value);
	}
	return 0;
}