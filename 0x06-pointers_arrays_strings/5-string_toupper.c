#include "main.h"
#include <ctype.h>
#include <string.h>

/**
  *string_toupper -all lowercase letters of a string to uppercase.
  *@s: the string
  *Return:the string in uppercase
  */
char *string_toupper(char *s)
{
	int i;
	int length = strlen(s);

	for (i = 0 ; i < length; i++)
		s[i] = toupper(s[i]);

	return (s);

}
