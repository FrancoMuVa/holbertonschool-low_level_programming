#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print the structur dog.
 * @d: Pointer.
 *
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
