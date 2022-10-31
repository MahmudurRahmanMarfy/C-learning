//  Write a c program to find out the sum of an A.P. series.

#include <stdio.h>

int main()
{
	int a, df, n, i, ln;
	int s1 = 0;

	printf("\n\n  Find out the sum of A.P. series :\n ");
	printf("----------------------------------------\n");

	printf("Input  the starting number of the A.P. series: ");
	scanf("%d", &a);

	printf("Input the number of items for  the A.P. series: ");
	scanf("%d", &n);

	printf("Input  the common difference of A.P. series: ");
	scanf("%d", &df);

	s1 = (n * (2 * a + (n - 1) * df)) / 2;
	ln = a + (n - 1) * df;
	printf("\nThe Sum of the  A.P. series are : \n");

	for (i = a; i <= ln; i = i + df)
	{
		if (i != ln)
			printf("%d + ", i);
		else
			printf("%d = %d \n\n", i, s1);
	}

return 0;
}