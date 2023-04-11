#include <stdio.h>
#include "main.h"

/**
 * flip_bits - number of bits needed to flip a number to another
 * @n: a number
 * @m: another number
 * Return: a number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, b = 0;
	unsigned long int c;
	unsigned long int d = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		c = d >> a;
		if (c & 1)
			b++;
	}

	return (b);
}
