//  3. Write a c program to count the number of capital letters and small letters in a string.

#include<stdio.h>
#include <string.h>

int main()
{
	int i, cap, small;
	char a[100];
	gets(a);
	
	cap=0;
	small=0;
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 'A' && a[i]<= 'Z')
		{
			cap++;
		}
		if(a[i]>= 'a' && a[i]<= 'z')
		{
			small++;
		}
	}
	printf("Captial letters = %d Small letters = %d", cap, small);
	return 0;
}