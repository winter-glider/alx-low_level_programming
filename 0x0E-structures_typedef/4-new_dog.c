#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
  *new_dog - creates a new dog.
  *@name: struct member1
  *@age: struct member2
  *@owner: struct member3
  *Return: pointer to struct
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);
	d->age = age;

	if (d == NULL)
	{
		return (NULL);
	}

	strcpy(d->name, name);
	strcpy(d->owner, owner);

	free(d);

	return (d);

}
