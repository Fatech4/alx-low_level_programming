#include "main.h"

/**
 * print_last_digit - Prints the sign of a number.
 * @n: The number of which the sign will be printed.
 *
 * Return: Returns value of the last digit
 */
int print_last_digit(int n)
{
	int num;

	num = (n % 10);
	if (num < 0)
	{
		num = (num * -1);
	}
	_putchar(num + '0');
	return (num);
}
