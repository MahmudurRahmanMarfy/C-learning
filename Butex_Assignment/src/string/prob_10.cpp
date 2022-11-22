//  10. Write a c program to check whether a string is a palindrome or not.
#include <stdio.h>
#include <string.h>

int main()
{
	int c;
	char a[100], b[100];
	gets(a);

	strcpy(b, a);
	strrev(b);
	c = strcmp(a, b);

	if (c == 0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}

	return 0;
}