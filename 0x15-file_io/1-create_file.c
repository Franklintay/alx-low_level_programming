#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int e, f, g = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (g = 0; text_content[g];)
			g++;
	}

	e = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	f = write(e, text_content, g);

	if (e == -1 || f == -1)
		return (-1);

	close(e);

	return (1);
}
