#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *develop(char *name);
void lock(int e);

/**
 * develop - Develops a buffer with 1024 bytes
 * @name: the name of the file
 *
 * Return: A pointer
 */

char *develop(char *name)
{
	char *m;

	m = malloc(sizeof(char) * 1024);

	if (m == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Canit write to %s\n", name);
		exit(99);
	}

	return (m);
}

/**
 * lock - complete name desricptors.
 * @e: The name descrictor to be completed.
 */

void lock(int e)
{
	int f;

	f = close(e);

	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close e %d\n", e);
		exit(100);
	}
}

/**
 * main - Copy the content of one file to another
 * @argc: Number of arguments
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int s, n, u, v;
	char *k;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	k = develop(argv[2]);
	s = open(argv[1], O_RDONLY);
	u = read(s, k, 1024);
	n = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (s == -1 || u == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
			free(k);
			exit(98);
		}

		v = write(n, k, u);
		if (n == -1 || v == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(k);
			exit(99);
		}

		u = read(s, k, 1024);
		n = open(argv[2], O_WRONLY | O_APPEND);

	} while (u > 0);
	free(k);
	lock(s);
	lock(n);

	return (0);
}
