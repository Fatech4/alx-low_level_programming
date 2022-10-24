#include "main.h"
/**
 * _strcpy - A function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: Destination string
 * @src: Source string
 * Return: Pointer to src
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*(src + count) != '\0')
	{
	*(dest + count)  = *(src + count);
	count++;
	}
	*(dest + count) = *(src + count);
	return (dest);
}
