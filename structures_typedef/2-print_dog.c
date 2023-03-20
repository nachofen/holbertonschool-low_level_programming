#include <stdio.h>
#include "dog.h"

/**
 * print_dog - ini dog
 * @d: pointer
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{

	if (!d)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("%s\n", d->name);
	}
	printf("%.6f\n", d->age);
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}

