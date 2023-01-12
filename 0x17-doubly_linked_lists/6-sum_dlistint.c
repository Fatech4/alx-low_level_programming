#include "lists.h"
unsigned int count_node(dlistint_t *head);
/**
 * sum_dlistint - A function that returns the sum of all the data (n) of a
 * dlistint_t linked list
 * @head: Head node
 * Return: sume of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *arrow = head;
	int sum = 0;
	unsigned int len = count_node(head);

	if (len == 0)
	{
		return (0);
	}

	while (arrow != NULL)
	{
		sum += arrow->n;
		arrow = arrow->next;
	}
	return (sum);
}

/**
 * count_node - Return numbers of node in a list
 * @head: Head node
 * Return: number of nodes
 */
unsigned int count_node(dlistint_t *head)
{
	int i = 0;
	dlistint_t *arrow = head;

	while (arrow != NULL)
	{
		i++;
		arrow = arrow->next;
	}
	return (i);
}
