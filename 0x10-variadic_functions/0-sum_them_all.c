#include "variadic_functions.h"
#include <stdarg.h>

/**
  *
  *
  *
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start (args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg (args, unsigned int);

	}

	va_end (args);

	return (sum);

}
