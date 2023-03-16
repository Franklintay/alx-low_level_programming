#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: initial string
 * @s2: other string
 * @n: size of allocated memory
 * Return: a pointer or Null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *d;

	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; a++)
			;
	}
	if (s2 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; s2[b]; b++)
			;
	}
	if (b > n)
		b = n;
	d = malloc(sizeof(char) * (a + b + 1));
	if (d == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		d[c] = s1[c];
	for (c = 0; c < b; c++)
		d[c + a] = s2[c];
	d[a + b] = '\0';
	return (d);
}
