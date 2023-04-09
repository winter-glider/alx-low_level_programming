#include "main.h"

/**
  *_isupper - checks for uppercase char
  *@c: is the character
  *Return: 1 if uppercase otherwise return 0
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);

}

