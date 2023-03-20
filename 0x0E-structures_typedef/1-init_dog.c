#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable type struct dog
 * @d: variable to be initialized
 * @name: name to set to variable
 * @age: variables age
 * @owner: varaibles owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
