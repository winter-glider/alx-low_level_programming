#include <stdio.h>
#include <unistd.h>

/**
 * main - prints given phrase to stderr
 * Return: 1 for false, 0 for true
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
