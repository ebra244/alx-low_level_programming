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
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("age: %f", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s", d->owner);
	if (d == NULL)
		return;
}
