#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - A function that creates a new dog
 * @name: Name member
 * @age: Age member
 * @owner: Owner member
 * Return: A new structure new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}
	else
	{
		my_dog->name = name;
		my_dog->age = age;
		my_dog->owner = owner;
	}
	return (my_dog);
}
