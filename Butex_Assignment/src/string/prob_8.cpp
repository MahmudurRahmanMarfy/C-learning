//  8. Write a c program to copy a string to another string.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100], b[100];
	printf("A");
	gets(a);

	strcpy(b,a);

	printf("B");
	puts(b);

	return 0;
}