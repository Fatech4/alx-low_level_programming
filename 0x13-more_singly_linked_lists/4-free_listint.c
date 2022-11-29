#include "lists.h"

/**
 * free_listint - A function that frees a list_t list
 * @head: Head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *arrow;

	while (head)
	{
		arrow = head->next;
		free(head);
		head = arrow;
	}
}
