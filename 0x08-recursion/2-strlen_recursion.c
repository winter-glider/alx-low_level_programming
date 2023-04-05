#include "main.h"

/**
  *_strlen_recursion - calculate sring length
  *@s: the string
  *Return: 0 else return 1 + _strelen_recursion(s+1)
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));

	}

}
