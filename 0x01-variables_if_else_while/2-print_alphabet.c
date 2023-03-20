#include <stdio.h>

/**
  *main- Putchar abc
  *Return: 0 always
  */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)

		putchar(ch);

	putchar('\n');
	return (0);
}
