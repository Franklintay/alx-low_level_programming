#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: one of the inuts
 * @av: charater
 * Return: a pointer or Null when it fails
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;
	x = malloc(sizeof(char) * d + 1);
	if (x == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			x[c] = av[a][b];
			c++;
		}
		if (x[c] == '\0')
		{
			x[c++] = '\n';
		}
	}
	return (x);
}
