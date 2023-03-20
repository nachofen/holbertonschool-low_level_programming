#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - ini dog
 * @d: pointer
 * @name: pointer
 * @age: float
 * @owner: pointer
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
