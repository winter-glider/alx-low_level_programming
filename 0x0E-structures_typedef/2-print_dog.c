#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *print_dog - prints struct dog
  *@d: struct pointer
  */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	if (d == NULL)
	{

	}

}

