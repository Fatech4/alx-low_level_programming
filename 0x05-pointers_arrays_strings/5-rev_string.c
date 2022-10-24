#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: String parameter
 * Return: void
 */
void rev_string(char *s)
{
	int count = 0;
	int rev;
	int len = 0;

	while (s[count] != '\0')
	{
		len++;
		count++;
	}
	for (count = len - 1, rev = 0; count >= 0 && rev < len; count--, rev++)
	{
		*(s + rev) = s[count];
	}
}
