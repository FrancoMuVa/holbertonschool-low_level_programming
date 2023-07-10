#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer.
 * @name: Char.
 * @age: Float.
 * @owner: Char.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
