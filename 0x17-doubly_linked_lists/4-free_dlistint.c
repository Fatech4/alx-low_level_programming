#include "lists.h"
/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: Head node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *arrow;

	while (head != NULL)
	{
		arrow = head;
		head = head->next;
		free(arrow);
	}
	free(head);
}
