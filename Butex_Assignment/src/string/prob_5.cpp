//  5. Write a c program to count alphanumeric characters in a string. Note that alphanumeric characters are a combination of alphabetic and numeric characters. Your program will print 8 for this string "<html></html>".

#include <stdio.h>
#include <string.h>

int main()
{
	int i, character;
	char a[100];
	gets(a);
	
	character = 0;

	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z' || a[i] >= '0' && a[i] <= '9')
		{
			character++;
		}	
	}
	printf("character = %d", character);

	return 0;
}