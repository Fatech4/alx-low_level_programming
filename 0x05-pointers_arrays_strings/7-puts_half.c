#include "main.h"

/**
 * puts_half - A function that prints half of a string, followed by a new line
 * @str: String parameter
 * Return: void
 */
void puts_half(char *str)
{
	int count = 0;
	int len = 0;
	int loop;

	while (str[count] != '\0')
	{
		len++;
		count++;
	}
	if (len % 2 == 0)
	{
		loop = len / 2;
		for (count = (loop); count < len; count++)
		{
			_putchar(str[count]);
		}
	}
	else
	{
		loop = (len - 1) / 2;
		for (count = (len - (loop)); count < len; count++)
		{
		_putchar(str[count]);
		}
	}
	_putchar('\n');
}
