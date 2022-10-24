#include "main.h"

/**
 * _puts - A function tha prints a string, followed by a new lines to stdout
 * @str: String parameter
 * Return: void
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
