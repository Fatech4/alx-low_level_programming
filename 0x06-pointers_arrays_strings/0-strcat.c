#include "main.h"
#include <stdio.h>
int _string_length(char *src);

/**
 * _strcat - A function that concatenates two strings.
 * @dest: String parameter to take the concatenated string
 * @src: String parameter to take the string to be concatenated
 * Return: Pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int index;
	int des = _string_length(dest);

	for (index = 0; index <= _string_length(src); index++)
	{
		*(dest + (des + index)) = src[index];
	}
	return (dest);
}

/**
 * _string_length - A function that returns the length of a string
 * @src: String parameter
 * Return: String length
 */

int _string_length(char *src)
{
	int count = 0, len = 0;

	while (src[count] != '\0')
	{
		len++;
		count++;
	}
	return (len);
}

