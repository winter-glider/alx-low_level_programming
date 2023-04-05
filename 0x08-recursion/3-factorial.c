#include "main.h"

/**
  *factorial - returns the factorial of a given number
  *@n: the number
  *Return: -1 if n less than 0 or 1 if equal to 0 else return n
  */
int factorial(int n)
{
	if (n == 0)
	{
		return (0);
	}

	else if (n  < 0)
	{
		return (-1);
	}

	else
	{
		return (n * factorial(n - 1));
	}

}
