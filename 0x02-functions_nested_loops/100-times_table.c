#include "main.h"
/**
 * print_times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * @n: Function Parameter
 * Return: times table
 * add extra space past single digit
 */
void print_times_table(int n)
{
	int i, j, d;
	if ((n <= 15) && (n != 0))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			for (j = 1; j <= n; j++)
			{
				d = (i * j);
				if ((d / 10) > 0)
				{
					_putchar((d / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((d % 10) + '0');

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
