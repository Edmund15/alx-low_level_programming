#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - initializes a varible of type struct dog
 *@d: pointer to struct dog to initialize
 *@name: name to initialize
 *@age: age to initiaze
 *@owner: owner to initialize
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

