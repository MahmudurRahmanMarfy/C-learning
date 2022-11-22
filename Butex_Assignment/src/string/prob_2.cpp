//  2. Write a c program to count the frequency of a character in a string.

#include<stdio.h>
#include <string.h>

int main()
{
	int i, count;
	char a[100], key;
	gets(a);

	printf("Character for search:");
	scanf("%c", &key);

	count=0;

	for (i = 0; i < strlen(a); i++)
	{
		if (key == a[i])
		{
			count++;
		}
	}
	
	printf("Frequency = %d", count);

	return 0;
}