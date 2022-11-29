#include "lists.h"

/**
 * free_list - A function that frees a list_t list
 * @head: Head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *arrow;

	while (*head)
	{
		arrow = (*head)->next;
		free(*head);
		*head = arrow;
	}
	*head = NULL;

}
