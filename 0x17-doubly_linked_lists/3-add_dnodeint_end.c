#include "lists.h"
/**
 * add_dnodeint_end - A function that adds a new node at the end of a
 * dlistint_t list
 * @head: Head node
 * @n: Integer data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new->n = n;
		temp->next = new;
		new->prev = temp;
		new->next = NULL;
	}
	return (new);
}
