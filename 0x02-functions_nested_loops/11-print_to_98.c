#include "main.h"

/**
 * print_to_98 - A function that prints all natural numbers from n to 98.
 *
 * @n: Parameter to count to 98
 * Return: void
 */
void print_to_98(int n)
{
	int i, j;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	else
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d, ", j);
		}
	}

}
