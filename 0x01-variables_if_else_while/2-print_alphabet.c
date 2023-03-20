#include <stdio.h>

/**
  *main- Putchar abc
  *Return: 0 always
  */
int main(void)
{

	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}
