#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *print_dog - prints struct dog
  *@d: struct pointer
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{

	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

	printf("Age: %f\n", d->age);

}

