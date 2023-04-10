#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints the number of arguments passed into it
  *@argc: counts the number arguments
  *@argv: string of arguments
  *Return: 0 always
  */
int main(int argc,  char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);


}
