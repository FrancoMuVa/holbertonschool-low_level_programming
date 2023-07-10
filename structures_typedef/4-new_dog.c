#include "dog.h"

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
	dog_t my_dog;
	dog_t *d = &my_dog;

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);

}
