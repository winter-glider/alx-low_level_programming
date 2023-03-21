#include "main.h"

/**
  *print_alphabet_x10 - print alphabet 10 times
  */
void print_alphabet_x10(void)
{
	char ch;
	int count = 1;

	do {
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);

		_putchar('\n');
	} while (count < '11')

}
