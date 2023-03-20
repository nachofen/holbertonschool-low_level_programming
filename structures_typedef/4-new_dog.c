#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - a function that print a string in reverse
 * @dest: the char pointer
 * @src: a
 * Return: a
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length])
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}

/**
 * new_dog - ini dog
 * @name: pointer
 * @age: age
 * @owner: pointer
 * Return: Always 0.
 */



dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pdog;
	char *copyname, *copyowner;
	int contname = 0, contowner = 0;

	pdog = malloc(sizeof(dog_t));

	if (pdog == NULL)
	{
		free(pdog);
		return (NULL);
	}
	while (name[contname])
	{
		contname++;
	}
	while (owner[contowner])
	{
		contowner++;
	}
	copyname = malloc(contname + 1);
	if (copyname == NULL)
	{
		free(copyname);
		free(pdog);
		return (NULL);
	}
	copyowner = malloc(contowner + 1);
	if (copyowner == NULL)
	{
		free(copyowner);
		free(pdog);
		return (NULL);
	}
	_strcpy(copyname, name);
	_strcpy(copyowner, owner);
	pdog->name = copyname;
	pdog->age = age;
	pdog->owner = copyowner;

	return (pdog);
}
