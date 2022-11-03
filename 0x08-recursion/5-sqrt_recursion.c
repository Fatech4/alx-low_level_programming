#include "main.h"
int check_root(int i, int n);
/**
 * _sqrt_recursion - A function that returns the natural square root of a
 * number
 * @n: Integer parameter
 * Return: Return square root
 */
int _sqrt_recursion(int n)
{
	return (check_root(1, n));
}

/**
 * check_root - A function that check the root of a number
 * @i: Counter
 * @n: Number
 * Return: 1 or -1
 */
int check_root(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (check_root(i + 1, n));
}
