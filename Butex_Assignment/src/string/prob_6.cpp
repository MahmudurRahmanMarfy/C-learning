//  6. Write a c program to calculate the length of a string.

#include<stdio.h>
#include<string.h>

int main()
{
	int i, length;
	char a[100];
	gets(a);
	
	length = 0;

	for (i = 0; i < a[i]!='\0'; i++)
	{
		length++;	
	}
	printf("length = %d", length);

	return 0;
}