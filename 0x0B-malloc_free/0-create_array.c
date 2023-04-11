#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of chars,& initializes it with a speci char
  *@size: size of array
  *@c: array
  *Return: a pointer to the array, or NULL if it fail
  */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)

		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{

		return (NULL);
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}

	}

	return (arr);

	free(arr);




}

