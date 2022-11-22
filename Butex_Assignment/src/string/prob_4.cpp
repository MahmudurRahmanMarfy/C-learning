//  4. Write a c program to count the number of vowels, consonants, digits, white-spaces, and special characters.

#include <stdio.h>
#include <string.h>

int main()
{
	int i, vowel, consonant, digit, whitespace, specialcharacter;
	char a[100];
	gets(a);

	vowel = 0;
	consonant = 0;
	digit = 0;
	whitespace = 0;
	specialcharacter = 0;

	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
		{ 
			vowel++;
		}
		else if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
		{
			consonant++;
		}
		else if (a[i] >= '0' && a[i] <= '9')
		{
			digit++;
		}
		else if (a[i] == ' ' )
		{
			whitespace++;
		}
		else if (a[i] == '*' || '/' || '+' || '-' || '$' || '%' || '&')
		{
			specialcharacter++;
		}

	}
	printf("vowels = %d consonants = %d digits = %d whitespace = %d specialcharacter = %d", vowel, consonant, digit, whitespace, specialcharacter);

	return 0;
}