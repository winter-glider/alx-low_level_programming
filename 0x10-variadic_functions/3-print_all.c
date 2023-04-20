#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_all -  prints anything
  *@format: list of types of arguments passed to the func
  *Return: nothing
  */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *k;
	int i;
	char x, *s;
	float f;

	va_start(args, format);
	k = format;

	while (*k)
	{
		switch (*k)
		{
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'x':
				x = va_arg(args, int);
				printf("%c", x);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s != NULL)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			default:
				break;
		}
	}
	printf("\n");
	va_end(args);
}
