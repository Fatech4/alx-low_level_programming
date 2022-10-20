#include "main.h"

/**
 * print_triangle - A function that prints a triangle, followed by a new line
 * @size: Function parameter
 * Return: void
 */
void print_triangle(int size)
{
	int count, space, ast;

	if (size > 0)
	{
		for (count = 1; count <= size; count++)
		{
			for (space = 1; space <= (size - count); space++)
			{
				_putchar(' ');
			}
			for (ast = 1; ast <= count; ast++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
