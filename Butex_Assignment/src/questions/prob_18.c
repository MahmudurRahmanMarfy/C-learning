//  Write a program in C to display the multiplication table vertically from 1 to n.

#include <stdio.h>

int main()
{
	int j, n, i;
	scanf("%d", &n);
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%dx%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}

	return 0;
}