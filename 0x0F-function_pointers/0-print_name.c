#include "function_pointers.h"

/**
  *print_name - prints a name
  *@name: first operand
  *@f: pointer to a function
  *Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (f && name != NULL)
		f(name);

}
