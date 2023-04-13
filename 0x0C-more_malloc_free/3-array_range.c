#include "main.h"
#include <stdlib.h>

/**
  *array_range - creates an array of integers.
  *@min: minimum value
  *@max: maximum value
  *Return: pointer to array
  */
int *array_range(int min, int max)
{
	int *ptr, i, len;

	if (min > max)
	{
		return (NULL);
	}

	len = (max - min) + 1;

	ptr = malloc(sizeof(*ptr) * len);

	if (ptr == NULL)
	{
		return (NULL);

	}

	else
	{
		for (i = min; i <= max; i++, min++)
		{
			ptr[i] = min;
		}
	}

	return (ptr);





}
