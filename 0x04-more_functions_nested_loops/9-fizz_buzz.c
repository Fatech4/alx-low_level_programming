#include <stdio.h>
#include "main.h"

/**
 * main - Main Entry point
 * Return: Return 0
 */

int main(void)
{
	int count;

	for (count = 1; count < 100; count++)
	{
		if (((count % 3) == 0) && ((count % 5) == 0))
		{
			printf("FizzBuzz ");
			continue;
		}
		else if ((count % 3) == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if ((count % 5) == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", count);
	}
	printf("Buzz\n");
	return (0);
}
