#include "main.h"

/**
  *more_numbers - prints 10 times the numbers
  */
void more_numbers(void)
{
	char i;
	int count = 1;

	do {
		for (i = '0'; i <= '14'; i++)

			_putchar(i);

		count++;

		_putchar('\n');

	} while (count < 11);

}




