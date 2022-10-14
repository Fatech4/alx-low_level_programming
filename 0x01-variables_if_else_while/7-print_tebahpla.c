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
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);

}
