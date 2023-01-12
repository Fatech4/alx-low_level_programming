#include "lists.h"

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

	while (count < index)
	{
		arrow = arrow->next;
		count++;
	}
	return (arrow);
}
