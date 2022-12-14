#include "lists.h"

/**
 * print_list - A function that prints all the elemenst of a list_t
 * @h: Node
 * Return: NUmber of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

		while (h != NULL)
		{
			if (h->str != NULL)
			{
				printf("[%u] %s\n", h->len, h->str);
			}
			else
			{
				printf("[0] (nil)\n");
			}
			h = h->next;
			i++;
		}
	return (i);
}
