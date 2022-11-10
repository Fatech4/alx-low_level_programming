#include <stdlib.h>
#include "main.h"

/**
 * _calloc - A function that allocates memory for an array, using malloc
 * @nmemb: Element
 * @size: Type size
 * Return: Pointer of type void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *space;

	if ((nmemb || size) == 0)
	{
		return (NULL);
	}
	space = malloc(nmemb * size);

	if (space == NULL)
	{
		return (NULL);
	}
	else
	{
		return (space);
	}
}
