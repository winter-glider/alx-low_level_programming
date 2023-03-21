#include <stdio.h>

/**
  *main - print hexadecimal
  *Return: 0 always
  */
int main(void)
{
	int i;
	char af;

	for (i = 0; i <= 10; i++)
		putchar('0' + i);
	for (af = 'a'; af <= 'f'; af++)
		putchar(af);
	putchar('\n');
	return (0);
}
