#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Function that frees dogs
 * @d: Pointer to dog d
 * Discription: Dogs are beautiful animals
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
