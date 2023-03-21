#include "main.h"

/**
  *_islower - check for lowercase letters
  *@c: lowercase char to be checked
  *Return: 1 if true , 0 if false
  */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);

}
