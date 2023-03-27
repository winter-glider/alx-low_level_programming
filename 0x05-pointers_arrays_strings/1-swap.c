#include "main.h"

/**
  *swap_int - swaps values of a and b
  *@a: integer value
  *@b: integer value
  *return: nothing
  */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;

}
