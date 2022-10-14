#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that print integer 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int integer;

	for (integer = '0'; integer <= '9'; integer++)
	{
		putchar(integer);
	}
	putchar('\n');
	return (0);

}

