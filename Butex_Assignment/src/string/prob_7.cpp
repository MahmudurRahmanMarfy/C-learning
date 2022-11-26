//  7. Write a c program to add three strings.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100], b[100], c[100];
	printf("A\n");
	gets(a);
	printf("B\n");
	gets(b);
	printf("c\n");
	gets(c);
	
	strcat(a,b);
	strcat(a,c);

	puts(a);
	
	return 0;
} 