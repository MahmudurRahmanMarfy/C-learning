//  Write a program in C to display the pattern like a diamond.

#include <stdio.h>

int main()
{
	int row, col, n;
	scanf("%d", &n);

	for (row = 1; row <= n; row++)
	{
		for (col = 1; col <= n - row; col++)
		{
			printf(" ");
		}

		for (col = 1; col <= 2 * row - 1; col++)
		{
			printf("*");
		}

		printf("\n", row);
	}
	for (row = n - 1; row >= 1; row--)
	{
		for (col = 1; col <= n - row; col++)
		{
			printf(" ");
		}

		for (col = 1; col <= 2 * row - 1; col++)
		{
			printf("*");
		}

		printf("\n", row);
	}
	return 0;
}