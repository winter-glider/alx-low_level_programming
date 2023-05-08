#include "main.h"

/**
  *create_file - creates a file.
  *@filename: filename
  *@text_content:NULL terminated string to write to the file
  *Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fh;
	int temp, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fh = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	temp = write(fh, text_content, len);

	if (fh == -1 || temp == -1)
		return (-1);

	close(fh);
	return (1);

}
