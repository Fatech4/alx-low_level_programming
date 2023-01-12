#include "lists.h"
/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: Head node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *arrow = head;

	while (arrow->next != NULL)
	{
		arrow = arrow->next;
		free(arrow);
	}
	free(head);
}
