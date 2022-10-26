#include "main.h"
#include <stdio.h>
/**
 * reverse_array - A function that reverses the content of an array of
 * integers
 * @a: Array to be reversed
 * @n: Number of element in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int count, i;
	int cop[1000];

	for (count = 0; count < n; count++)
		cop[count] = a[count];
	for (count = (n - 1), i = 0 ; count >= 0; count--, i++)
		a[i] = cop[count];
}
