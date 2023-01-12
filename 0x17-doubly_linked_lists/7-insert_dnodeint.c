#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a new node at a given
 * @h: Head node
 * @idx: index of the list where the new node should be added
 * @n: Integer data
 * Return: address of the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *arrow = *h;
	dlistint_t *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else
	{
		while (count < (idx - 1))
		{
			arrow = arrow->next;
			count++;
		}
		new->n = n;
		new->next = arrow->next;
		arrow->next = new;
		new->prev = arrow;
		if (new->next != NULL)
		{
			new->next->prev = new;
		}
	}
	return (new);

}
