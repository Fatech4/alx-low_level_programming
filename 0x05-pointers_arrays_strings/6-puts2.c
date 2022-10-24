#include "main.h"

/**
 * puts2 - A function that prints every other character of a string, starting
 * with the first character, followed by a new line
 * @str: String parameter
 * Return: void
 */
void puts2(char *str)
{
	int count = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (count % 2 != 0)
		{
			continue;
		}
		_putchar(str[count]);
	}
	_putchar('\n');
}
