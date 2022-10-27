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
	int i;
	char alpha[] = "aAeEoOtTlL";
	char encr[] = "4433007711";

	for (count = 0; str[count] != '\0'; count++)
	{
		for (i = 0; i < 10; i++)
		{
			if (str[count] == alpha[i])
			{
			str[count] = encr[i];
			}
		}
	}
	return (str);
}

