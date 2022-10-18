#include "main.h"

/**
 * _abs - Prints the sign of a number.
 * @n: The number of which the sign will be printed.
 *
 * Return: Absolute value of a number
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * -1);
	}
}
