#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - New dog.
 * @name: Member of name.
 * @age: Member of age.
 * @owner: Member of owner.
 *
 *
 * Return: Pointer.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	strcpy(d->name, name);

	d->age = age;

	strcpy(d->owner, owner);

	return (d);
}
