#include "lists.h"

/**
 * free_listint2 - A function that frees a list_t list
 * @head: Head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *arrow;
	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		arrow = (*head)->next;
		free(*head);
		*head = arrow;
	}
	*head = NULL;

}
