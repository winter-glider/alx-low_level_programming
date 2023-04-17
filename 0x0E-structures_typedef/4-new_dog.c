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
	int len1, len2;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}

	len1 = strlen(name);
	len2 = strlen(owner);

	d->name = malloc(sizeof(char) * len1 + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * len2 + 1);
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	d->age = age;

	strcpy(d->name, name);
	strcpy(d->owner, owner);


	return (d);

}
