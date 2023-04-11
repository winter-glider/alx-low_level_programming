#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *str_concat - concatenates two strings
  *@s1: first string
  *@s2: second string
  *Return: contents of s1, followed by the contents of s2, and '\0'
  * return NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	char *result;
	char *s3;
	unsigned long int len, i;

	if (s1 || s2 == NULL)
	{
		return (" ");
	}

	result = strcat(s1, s2);

	len = strlen(result);

	s3 = malloc(sizeof(char) * (len + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i <= len; i++)
		{
			s3[i] = result[i];

		}

		s3[len] = '\0';

	}

	return (s3);

}









