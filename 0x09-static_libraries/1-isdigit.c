#include "main.h"

/**
  *_isdigit - check for digits 1 through 9
  *@c: the digit
  *Return: 1 if c is a digit else return 0
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')

		return (1);

	else
		return (0);

}
