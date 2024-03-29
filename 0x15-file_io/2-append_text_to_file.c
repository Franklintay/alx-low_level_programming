#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int e, f, g = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (g = 0; text_content[g];)
			g++;
	}

	e = open(filename, O_WRONLY | O_APPEND);
	f = write(e, text_content, g);

	if (e == -1 || f == -1)
		return (-1);

	close(e);

	return (1);
}
