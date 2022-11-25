//  9. Write a c program to reverse a string.
#include <stdio.h>
#include <string.h>

int main()
{

	char a[100], b[100];
	gets(a);

	strcpy(b, a);
	strrev(b);

	puts(b);
	return 0;
}