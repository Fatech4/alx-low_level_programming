#include "main.h"

/**
 * times_table - A function that prints the 9 times table, starting with 0.
 *
 * Return: Return void
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			_putchar((result - '0');
					if (j != 9)
					{
						_putchar(',');
						_putchar(' ');
					}
		}
		_putchar('\n');
	}
}

