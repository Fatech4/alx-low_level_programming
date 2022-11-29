#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end of a listint_t
 * list
 * @head: Head node
 * @n: integer data
 * Return: newnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		listint_t *traverse_node = *head;

		while (traverse_node->next != NULL)
		{
			traverse_node = traverse_node->next;
		}
		traverse_node->next = newnode;
	}
	return (newnode);
}
