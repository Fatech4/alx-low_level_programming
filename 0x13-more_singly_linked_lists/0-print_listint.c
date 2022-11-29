#include "lists.h"
/**
 * print_listint - A function that prints all the element of a listint_t
 * @h: Node
 * Return: NUmber of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	return (i);
}
