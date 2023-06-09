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
	char *s3;
	unsigned long int len1, len2;

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
	s3 = malloc(len1 + len2 + 1);

	if (s3 == NULL)
	{
		return (NULL);
	}

	memcpy(s3, s1, len1);
	memcpy(s3 + len1, s2, len2 + 1);

	return (s3);

}









