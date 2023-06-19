#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Function that prints struct dog
 * @d: Pointer for struct dog
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("(nil)");
	else
		printf("Name: %s", d->name);
	if (d->age == 0)
		printf("(nil)");
	else
		printf("age: %f", d->age);
	if (d->owner == NULL)
		printf("(nil)");
	else
		printf("owner: %s", d->owner);
	if (d == NULL)
		return;
}
