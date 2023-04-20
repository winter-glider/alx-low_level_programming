#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_numbers - prints numbers, followed by a new line
  *@separator:string to be printed between numbers
  *@n: num of params
  *Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x;


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);

		printf("%d", x);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");

	va_end(args);

}


