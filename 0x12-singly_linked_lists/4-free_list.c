#include "lists.h"

/**
 * free_list - A function that frees a list_t list
 * @head: Head node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *arrow;

	while (head)
	{
		arrow = head->next;
		free(head->str);
		free(head);
		head = arrow;
	}
}
