#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * word - counts the letter of a string.
 * @f: A string
 * Return: an integer
 */
int word(char *f)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; f[b] != '\0'; b++)
	{
		if (f[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}
/**
 * strtow - splits a string into words.
 * @str: A string
 * Return: a pointer or for failure, Null, "", Null
 */
char **strtow(char *str)
{
	char **i, *j;
	int w, x = 0, y = 0, z, c = 0, beg, fin;

	while (*(str + y))
		y++;
	z = word(str);
	if (z == 0)
		return (NULL);
	i = (char **) malloc(sizeof(char *) * (z + 1));
	if (i == NULL)
		return (NULL);
	for (w = 0; w <= y; w++)
	{
		if (str[w] == ' ' || str[w] == '\0')
		{
			if (c)
			{
				fin = w;
				j = (char *) malloc(sizeof(char) * (c + 1));
				if (j == NULL)
					return (NULL);
				while (beg < fin)
					*j++ = str[beg++];
				*j = '\0';
				i[x] = j - c;
				x++;
				c = 0;
			}
		}
		else if (c++ == 0)
			beg = w;
	}
	return (i);
}
