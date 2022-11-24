#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning of a list_t
 * list
 * @head: The head node
 * @str: String
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->next = *head;
	newnode->len = _strlen(str);
	*head = newnode;
	return (newnode);

}

/**
 * _strlen - A function that returns the length of a string
 * @str: String argument
 * Return: The length
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

