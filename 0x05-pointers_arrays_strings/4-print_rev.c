#include "main.h"

/**
 * print_rev - A function that prints a string, in revers, followed by new line
 * @s: String parameter
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;
	int len = 0;

	while (s[count] != '\0')
	{
		len++;
		count++;
	}
	for (count = len - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
