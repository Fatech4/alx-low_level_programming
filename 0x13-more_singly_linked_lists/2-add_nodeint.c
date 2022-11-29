#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning of a list_t
 * list
 * @head: The head node
 * @n: String
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

