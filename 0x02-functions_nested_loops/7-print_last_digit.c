#include "main.h"

/**
 * print_last_digit - Prints the sign of a number.
 * @n: The number of which the sign will be printed.
 *
 * Return: Returns value of the last digit
 */
int print_last_digit(int n)
{
	while (n > 10)
	{
	n = n % 10;
	}
	return (n);
}
