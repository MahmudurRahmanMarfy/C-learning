//  Write a C program to find first and last digit of a number

#include <stdio.h>

int main()
{
	int i, n, r, temp;
	scanf("%d", &n);

	temp = n % 10;

	while (n != 0)
	{
		r = n % 10;
		n = n / 10;
	}

	printf("first digit=%d, last digit=%d ", r, temp);

	return 0;
}