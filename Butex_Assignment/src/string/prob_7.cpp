//  7. Write a c program to add three strings.

#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char a[100], b[100], c[100], d[100] ;
	printf("A");
	gets(a);
	printf("B");
	gets(b);
	printf("c");
	gets(c);
	


	for (i = 0; i < strlen(a) || i < strlen(b) || i < strlen(c) ; i++)
	{		
		d[i]=0;
		d[i] = a[i] + b[i] + c[i];
	}
	for (i = 0; i < strlen(a) || i < strlen(b) || i < strlen(c) ; i++)
	{
			puts(d);
	}
	
	return 0;
} 