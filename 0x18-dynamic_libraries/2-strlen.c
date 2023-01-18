#include "main.h"

/**
 * _strlen - A funtion that returns the length of a string
 * @s: The string parameter
 * Return: Return the length of the string
 */
int _strlen(char *s)
{
	int count = 0;
	int len = 0;

	while (s[count] != '\0')
	{
		len += 1;
		count++;
	}
	return (len);
}
