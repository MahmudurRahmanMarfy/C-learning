//  Write a program in C to print the Floyd's Triangle.

#include <stdio.h>

int main()
{
	int row, col, n, i, count=0, v;
	scanf("%d", &n);
	for (row = 1; row <= n; row++)
	{
		for(col=1; col<=row; col++)
		{
			count++;
			printf( "%d ", count);
		}
		printf("\n");
	}
	return 0;
}