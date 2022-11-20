//  Write a c program to find the perfect numbers within a given number of range.

#include <stdio.h>

int main()
{
	int n, i, sum, start, end;
	scanf("%d %d", &start, &end);
	for (n = start; n <= end; n++)
	{
		sum = 0;
		for (i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sum = sum + i;
			}
		}
		if (sum == n)
		{
			printf("Perfect Number%d\n", n);
		}
		else
		{
			printf("Not Perfect Number%d\n", n);
		}
	}
	return 0;
}