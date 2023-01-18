#include "main.h"
#include <stdio.h>
/**
 * _strcmp - A function that compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Return integer depending on the result of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int count, cmp;

	for (count = 0; s1[count] != '\0'; count++)
	{
		if (s1[count] == s2[count])
		{
			cmp = 0;
		}
		else
		{
			cmp = (int)s1[count] - (int)s2[count];
			break;
		}
	}
	return (cmp);
}
