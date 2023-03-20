#include <stdio.h>

/**
  *main - Print alphabet in reverse
  *Return: 0 Always
  */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
