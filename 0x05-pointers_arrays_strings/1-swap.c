#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: First integer parameter
 * @b: Second integer parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
