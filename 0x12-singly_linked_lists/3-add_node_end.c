#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a list_t list
 * @head: Head node
 * @str: String parameter
 * Return: newnode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		list_t *traverse_node = *head;

		while (traverse_node->next != NULL)
		{
			traverse_node = traverse_node->next;
		}
		traverse_node->next = newnode;
	}
	return (newnode);
}
/**
 * _strlen - A function that returns the length of a string
 * @str: A string function
 * Return: Length of string
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
