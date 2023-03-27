#include "main.h"

/**
  *print_rev - print string in reverse
  *@s: the string
  *Return: nothing
  */
void print_rev(char *s)
{
	int count = 0;
	int length;

	while (*s != '\0')
	{
		count++;
		s++;

	}

	s--;

	for (length = count; length > 0 ; length--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}
