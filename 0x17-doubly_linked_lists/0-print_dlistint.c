#include "lists.h"

/**
 * print_dlistint - A function that prints all elements of
 * a dlistint_t list
 * @h: Head node
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *arrow;
	int count = 0;

	arrow = h;
	while (arrow != NULL)
	{
		count++;
		printf("%d\n", arrow->n);
		arrow = arrow->next;
	}
	return (count);
}


