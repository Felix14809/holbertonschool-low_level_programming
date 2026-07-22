#include "dog.h"
#inlcude <stdlib.h>
/**
 * init_dog - use dog structure
 * @d: the passed structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: nothin
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
