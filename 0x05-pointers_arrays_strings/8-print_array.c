#include <stdio.h>
#include "main.h"

/**
 * print_array - A function that prints n elements of an array of integers,
 * followed by a new line
 * @a: The array parameter
 * @n: The number n of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			if (count != (n - 1))
			{
				printf("%d, ", a[count]);
			}
			else
			{
				printf("%d\n", a[n - 1]);
			}
		}
	}
	else
	{
		printf("\n");
	}
}
