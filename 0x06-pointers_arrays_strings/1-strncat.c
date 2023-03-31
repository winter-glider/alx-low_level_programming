#include "main.h"
#include <string.h>

/**
  *_strncat - concatenates two strings
  *@dest : first string
  *@src : second string
  *@n:n bytes
  *Return: a pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);

}
