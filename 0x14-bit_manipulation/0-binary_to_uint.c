#include "main.h"

/**
  *binary_to_uint - converts a binary number to an unsigned int
  *@b: the binary number
  *Return:the converted number, or 0 if
  *there is one or more chars in the string b that is not 0 or
  *b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int base = 1, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			decimal = decimal * 2 + 0;
		else if (b[i] == '1')
			decimal = decimal * 2 + 1;
		else
			return (0);
		base = base * 2;
	}


	return (decimal);

}
