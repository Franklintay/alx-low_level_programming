#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to POSIX STDOP
 * @filename: file name to be read
 * @letters: size of the file to be read
 * Return: the actual number of letters it could read and print otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *m;
	ssize_t e;
	ssize_t f;
	ssize_t g;

	e = open(filename, O_RDONLY);
	if (e == -1)
		return (0);
	m = malloc(sizeof(char) * letters);
	g = read(e, m, letters);
	f = write(STDOUT_FILENO, m, g);

	free(m);
	close(e);
	return (f);
}
