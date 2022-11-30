#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns a node at an index n
 * @head: pointer to first node of linked lists
 * @index: nth node
 *
 * Description: returns the nth node of linked list
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
