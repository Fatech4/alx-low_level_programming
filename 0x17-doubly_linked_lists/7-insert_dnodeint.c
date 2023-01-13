#include "lists.h"
unsigned int count_node(dlistint_t **head);
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
	unsigned int len = count_node(h);

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
	else if (idx == (len - 1))
	{
		return (add_dnodeint_end(h, n));
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


/**
 * count_node - Return numbers of node in a list
 * @head: Head node
 * Return: number of nodes
 */
unsigned int count_node(dlistint_t **head)
{
	int i = 0;
	dlistint_t *arrow = *head;

	while (arrow != NULL)
	{
		i++;
		arrow = arrow->next;
	}
	return (i);
}
