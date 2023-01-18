#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: Numbers of charater to copy from source string
 * Return: Return updated dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
