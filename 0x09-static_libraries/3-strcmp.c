#include "main.h"
#include <string.h>

/**
  *_strcmp - compares two strings.
  *@s1: string 1
  *@s2: string 2
  *Return: 0 if strings are equal
  *else return < 0 if s1 char lower than s2 in ASCII
  *else return > 0 if s1 char higher than s2 in ASCII
  */
int _strcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) > 0)
	{
		return (strcmp(s1, s2));
	}
	else if (strcmp(s1, s2) < 0)
	{
		return (strcmp(s1, s2));

	}
	else
		return (0);


}
