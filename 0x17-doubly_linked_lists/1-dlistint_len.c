#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in linked
 * dlistint_t list
 * @h: Head node
 * Return: NUmber of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *arrow;
	int count = 0;

	arrow = h;
	while (arrow != NULL)
	{
		count++;
		arrow = arrow->next;
	}
	return (count);
}
