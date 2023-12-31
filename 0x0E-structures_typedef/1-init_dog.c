#include "dog.h"


/**
 * init_dog - Function initializes dog function
 * @d: dog function
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Always 0 (success)
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
