#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *_strdup - contains a copy of the string given as a parameter.
  *@str: the string
  *Return:  a pointer to the duplicated string
  *NULL if insufficient memory was available
  */
char *_strdup(char *str)
{
	unsigned long int len;
	char *str1 = NULL;

	if (str == NULL)
	{
		str1 = malloc(strlen(str) + 1);
		if (str1)
			strcpy(str1, str);

	}

	return (str1);



}

