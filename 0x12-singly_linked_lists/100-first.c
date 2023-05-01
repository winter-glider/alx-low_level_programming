#include <stdio.h>

/**
  *before_main - adds before main func
  *Return: nothing
  */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");

}


