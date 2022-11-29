#include "lists.h"

/**
 * listint_len - A function that returns the number of elements in a linked
 * listint_t list
 * @h: Node
 * Return: Number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
