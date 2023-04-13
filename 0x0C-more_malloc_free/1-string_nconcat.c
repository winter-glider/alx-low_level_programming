#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *string_nconcat - concatenates two strings.
  *@s1: destination string
  *@s2: string to be added to s1
  *@n: number of bytes
  *Return: pointer to new string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		return (s2);
	}

	ptr = malloc(len1 + len2 + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		memcpy(ptr, s1, len1);
		memcpy(ptr, s2, len2 + 1);
	}

	return (ptr);

	free(ptr);




}

