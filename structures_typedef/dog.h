#ifndef	HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - New type.
 * @name: Member of name.
 * @age: Member of age.
 * @owner: Member of owner.
 *
 * Description: Longer description.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
