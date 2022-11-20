//  Write a C program to print all odd number between 1 to 100.

#include <stdio.h>

int main()
{
	int i, n;
	for (i = 1; i <= 100; i = i + 2)
	{
		printf("%d\n", i);
	}
	return 0;
}