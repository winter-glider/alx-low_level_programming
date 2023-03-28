#include "main.h"

/**
  *puts2 - prints every other character of a string
  *@str: the string
  *Return: nothing
  */

void puts2(char *str)
{
	int i;
	int length = 0;

	for  (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	while (length % 2 == 0)
	{
		_putchar(str[i]);

	}

}
