#include "main.h"
char enc(char str);

/**
 * leet - A function that encodes a string into 1337
 * @str: String parameter
 * Return: Return the encoded string
 */
char *leet(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		str[count] = enc(str[count]);
	}
	return (str);
}
/**
 * enc - A function that encode the letter in 1337 format
 * @str: The letter parameter
 * Return: The the encoded letter
 */

char enc(char str)
{
	if ((str == 'a') || (str == 'A'))
		str = '4';
	else if ((str == 'e') || (str == 'E'))
		str = '3';
	else if ((str == 'o') || (str == 'O'))
		str = '0';
	else if ((str == 't') || (str == 'T'))
		str = '7';
	else if ((str == 'l') || (str == 'L'))
		str = '1';
	else
	{}

	return (str);
}
