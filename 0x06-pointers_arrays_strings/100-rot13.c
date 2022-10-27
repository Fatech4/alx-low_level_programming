#include "main.h"

/**
 * rot13 - A function that encodes a string using rot13
 * @str: String parameter
 * Return: Return the encoded string
 */
char *rot13(char *str)
{
	int count;
	int i;
	char alpha[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char encr[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (count = 0; str[count] != '\0'; count++)
	{
		for (i = 0; i < 52; i++)
		{
			if (str[count] == alpha[i])
			{
				str[count] = encr[i];
				continue;
			}
		}
	}
	return (str);
}

