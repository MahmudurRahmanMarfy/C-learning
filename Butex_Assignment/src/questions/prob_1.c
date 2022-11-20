//  Write a C program to print all natural numbers from 1 to n.

#include <stdio.h>

int main()
{
	int i, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		printf("%d\n", i);

	return 0;
}