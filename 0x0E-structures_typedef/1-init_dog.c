#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type srtuct dog.
 *
 * @d: structure pointer
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
<<<<<<< HEAD
  */
=======
 */
>>>>>>> d18ec9884d3d446cd4afd52f869baf84fefbd13f

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	
	}

}
