#include "dog.h"
/**
 * init_dog - initialize a variable of type srtuct dog.
 *
 * @d: structure pointer
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
