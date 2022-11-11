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
		int i;
		int *num = space;

		for (i = 0; i < (int)(nmemb * size); i = i + 4)
		{
			num[i] = 0;
		}
		return (space);
	}
}
