#include "main.h"

/**
 * _puts - A function tha prints a string, followed by a new lines to stdout
 * @str: String parameter
 * Return: void
 */
void _puts(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count++;
	}
	_putchar('\n');
}
