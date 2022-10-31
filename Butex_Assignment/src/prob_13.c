//  Write a C program to enter a number and print it in words.

#include <stdio.h>

int main()
{
	int n, i, temp, temp2 = 0;
	scanf("%d", &n);

	temp = n;

	while (temp != 0)
	{
		temp2 = temp2 * 10 + temp % 10;
		temp = temp / 10;
	}

	temp = temp2;
	while (temp != 0)
	{
		switch (temp % 10)
		{
		case 1:
			printf("one ");
			break;

		case 2:
			printf("two ");
			break;

		case 3:
			printf("three ");
			break;

		case 4:
			printf("four ");
			break;

		case 5:
			printf("five ");
			break;

		case 6:
			printf("six ");
			break;

		case 7:
			printf("seven ");
			break;

		case 8:
			printf("eight ");
			break;

		case 9:
			printf("nine ");
			break;

		default:
			break;
		}
		temp = temp / 10;
	}
	return 0;
}