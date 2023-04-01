#include "main.h"

/**
  *cap_string - capitalizes all words of a string.
  *@s: the string
  *Return: capitalized string
  */

char *cap_string(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)

		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0 || s[i - 1] == ' ' || s[i - 1] == 9 || s[i - 1] == '\n'
					|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
					|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
					|| s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
					|| s[i - 1] == '}')
			{
				s[i] -= 32;

			}
		}
	return (s);

}
