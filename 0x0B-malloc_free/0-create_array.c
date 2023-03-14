#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: memory size of the Array
 * @c: the char
 * Return: Null if size = 0, Null if fails/pointer
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	x = malloc(sizeof(char) * size);
	if (size == 0 || x == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
		x[y] = c;
	return (x);
}
