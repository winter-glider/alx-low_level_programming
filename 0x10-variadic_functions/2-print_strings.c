#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_strings - prints strings, followed by a new line.
  *@separator: string to be printed between the strings
  *@n: number of strings passed to the function
  *Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, const char *);

		if (x != NULL)
			printf("%s", x);
		else
			printf("nil");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");

	va_end(args);

}
