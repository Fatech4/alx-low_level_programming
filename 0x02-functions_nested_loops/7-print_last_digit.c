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

	num = n % 10;
	if (num < 0)
	{
		return (num * -1);
	}
	else
	{
		return (num);
	}
}
