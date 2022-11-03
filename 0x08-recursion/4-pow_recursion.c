#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x raised to the power
 * of y
 * @x: Base number
 * @y: index
 * Return: Power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
