#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *malloc_checked - allocates memory using malloc
  *@b: size of memory
  *Return: nothing
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	else
	{
		return (ptr);
	}

}
