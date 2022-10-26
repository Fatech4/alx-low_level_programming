#include "main.h"
#include <stdio.h>
int _string_length(char *src);

/**
 * _strncat - A function that concatenates two strings.
 * @dest: String parameter to take the concatenated string
 * @src: String parameter to take the string to be concatenated
 * @n: Size of src to be copied
 * Return: Pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index;
	int des = _string_length(dest);

	for (index = 0 ; index < n && src[index] != '\0' ; index++)
	{
		*(dest + (des + index)) = src[index];
	}
	dest[des + index] = '\0';

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

