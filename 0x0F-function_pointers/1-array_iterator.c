#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
  *array_iterator - executes a func given as a param on elements of an array
  *@array : first operand
  *@size: second operand
  *@action: func pointer
  *Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

	}

}

