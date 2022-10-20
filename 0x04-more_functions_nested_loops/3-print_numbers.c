#include "main.h"

/**
 * print_numbers -  A function that prints the numbers, from 0 to 9, followed
 * by a new line.
 * Return : void
 */

void print_numbers(void)
{
	int count;

	for (count = 0; count <= 9; count++)
	{
		_putchar(count + '0');
	}
	_putchar('\n');
}
