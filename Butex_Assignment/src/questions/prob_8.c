//  Write a C program to print multiplication table of any number

#include <stdio.h>

int main()
{
	int i, n, c;
	scanf("%d", &n);
	for (i = 1; i <= 10; i++)
	{
		c = n * i;
		printf("%d x %d = %d\n", n, i, c);
	}

	return 0;
}