#include "main.h"
int check_prime(int i, int n);
/**
 * is_prime_number - A function that returns 1 if the imput integer is a prime
 * number, otherwise return 0
 * @n: Integer
 * Return: Return 1 0r 0
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (check_prime(2, n));
}

/**
 * check_prime - A function that check for prime number
 * @i: counter
 * @n: Number
 * Return: 1 or 0
 */
int check_prime(int i, int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(i + 1, n));
}
