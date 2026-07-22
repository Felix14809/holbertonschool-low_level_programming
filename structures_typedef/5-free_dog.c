#include "dog.h"
#include <stdlib.h>
/**
 * fee_dog - frees memory occupied by structure
 * @d: structure to be freed
 *
 * Return: nothin
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free (d);
}

