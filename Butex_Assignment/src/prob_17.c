//  Write a program in C to display the multiplication table of a given integer.

#include <stdio.h>

int main()
{
	int n, i, c;
	scanf("%d", &n);
	for (i = 1; i <= 10; i++)
	{
		c = n * i;
		printf("%d*%d=%d\n", n, i, c);
	}
	return 0;
}