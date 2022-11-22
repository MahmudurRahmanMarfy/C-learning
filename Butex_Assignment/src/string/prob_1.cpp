//  1. Write a c program to search for a character in a string. It will print the index of the element, if it is found. Otherwise, it will print "Not found."

#include <stdio.h>
#include <string.h>

int main()
{
	int i, flag;
	char a[100], key;
	gets(a);

	printf("Character for search:");
	scanf("%c", &key);

	flag = -1;

	for (i = 0; i < strlen(a); i++)
	{
		if (key == a[i])
		{
			flag = i;
			break;
		}
	}
	
	if(flag!=-1)
	{
		printf("It is found. the index = %d", flag);
	}
	else 
	printf("Not found");

	return 0;
}