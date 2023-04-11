#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int c = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		c = 2 * c + (b[a] - '0');
	}

	return (c);
}
