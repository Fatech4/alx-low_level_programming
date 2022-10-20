#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal.
 * @n: Function Parameter
 * Return: void
 */
void print_diagonal(int n)
{
	int count, diag;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (diag = 0; diag < count; diag++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
