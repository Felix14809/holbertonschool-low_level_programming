#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new struct, or NULL 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, len;
	
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	len = 0;
	while (name[len] != '\0')
		len++;
	d->name = malloc(len + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	i = 0;
	while (i <= len)
	{
		d->name[i] = name[i];
		i++;
	}
	len = 0;
	while (owner[len] != '\0')
		len++;
	d->owner = malloc(len + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	i = 0;
	while (i <= len)
	{
		d->owner[i] = owner[i];
		i++;
	}
	d->age = age;
	return (d);
}
