#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  *init_dog - function that initialize a variable of type
  *@d: struct
  *@name: struct member 1
  *@age: struct member 2
  *@owner: struct member 3
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;

}

