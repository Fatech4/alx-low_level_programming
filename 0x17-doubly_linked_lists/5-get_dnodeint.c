#include "lists.h"
unsigned int count_node(dlistint_t *head);
/**
 * get_dnodeint_at_index - A function that returns the nth node of a
 * dlistint_t linked list
 * @head: Head node
 * @index: nth index
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *arrow = head;
	unsigned int count = 0;
	unsigned int len = count_node(head);

	if (len == 0)
	{
		return (NULL);
	}
	else if (index >= len)
	{
		return (NULL);
	}
	else
	{
		while (count < index)
		{
			arrow = arrow->next;
			count++;
		}
	}
	return (arrow);
}

/**
 * count_node - Return numbers of node in a list
 * @head: Head node
 * Return: number of nodes
 */
unsigned int count_node(dlistint_t *head)
{
	int i = 0;
	dlistint_t *arrow = head;

	while (arrow != NULL)
	{
		i++;
		arrow = arrow->next;
	}
	return (i);
}
