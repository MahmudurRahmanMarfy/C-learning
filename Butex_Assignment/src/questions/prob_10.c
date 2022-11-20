//  Write a C program to find sum of first and last digit of a number.

#include <stdio.h>

int main()
{
	int i, n, r, temp, sum;
	scanf("%d", &n);

	temp = n % 10;

	while (n != 0)
	{
		r = n % 10;
		n = n / 10;
	}
	sum = temp + r;
	printf(" %d ", sum);

	return 0;
}