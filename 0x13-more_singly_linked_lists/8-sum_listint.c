#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all data of a list
 * @head: pointer to first node of linked lists
 *
 * Description: returns the sum of all the data(n)
 * Return: sum or 0 if empty
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
