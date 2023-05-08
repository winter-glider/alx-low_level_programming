#include "main.h"

/**
  *read_textfile -reads a text file and prints it to the POSIX stdout
  *@filename: the filename
  *@letters: number of letters it should read and print
  *Return: he actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fh;
	char *buffer;
	ssize_t count;
	ssize_t temp;

	if (filename == NULL)
		return (0);

	fh = open(filename, O_RDONLY);
	if (fh == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fh);
		return (0);
	}
	count = read(fh, buffer, letters);
	temp = write(STDOUT_FILENO, buffer, count);

	close(fh);
	free(buffer);
	return (temp);

}
