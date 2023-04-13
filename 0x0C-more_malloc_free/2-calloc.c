#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *_calloc - allocates memory for an array, using malloc
  *@nmemb: elements of the array
  *@size: number of bytes
  *Return: pointer to memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	else
	{
		memset(ptr, 0, nmemb * size);
	}

	return (ptr);


}
