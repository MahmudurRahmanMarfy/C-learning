//  Write a program in C to read 10 numbers from keyboard and find their sum and average.

#include <stdio.h>

int main()
{
	int num, i, sum = 0;
	float avg;

	for (i = 1; i <= 10; i++)
	{
		scanf("%d", &num);
		sum += num;
	}

	avg = sum / (float)10;

	printf("%d\n%f", sum, avg);
	return 0;
}