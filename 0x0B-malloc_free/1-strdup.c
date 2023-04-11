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
	unsigned long int i, len;
	char *str1;

	if  (str == NULL)
	{
		return (NULL);

	}

	len = strlen(str + 1);

	str1 = malloc(sizeof(char) * len);

	if (str1 < str)
	{
		return (NULL);

	}

	else
	{
		for (i = 0; i <= len; i++)
		{
			str1[i] = str[i];

		}

	}

	return (str1);



	free(str1);

}

