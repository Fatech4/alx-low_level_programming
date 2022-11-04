#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main function
 * @argc: The argument counter
 * @argv: The argument vector
 * Return: Always 0 (Success) 1 for (fail)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}