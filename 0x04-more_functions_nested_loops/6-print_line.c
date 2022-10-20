
#include "main.h"

/**
 * print_line -  A function that draws a straight line in the terminal.
 * @n: Function parameter
 * Return: void
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 1; count <= n; count++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
