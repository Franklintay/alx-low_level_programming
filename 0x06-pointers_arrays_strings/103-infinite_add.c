#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer
 * Return: Always 0
 */

void rev_string(char *n)
{
	int e = 0;
	int f = 0;
	char g;

	while (*(n + e) != '\0')
	{
		e++;
	}
	e--;

	for (f = 0; f < e; f++, e--)
	{
		g = *(n + f);
		*(n + f) = *(n + e);
		*(n + e) = g;
	}
}

#include "main.h"

/**
 * infinite_add - add 2 numbers
 * @n1: one of the numbers to add
 * @n2: one of the numbers to add
 * @r: the buffer
 * @size_r: the buffer size
 * Return: the result can not be stored in r the function must return 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0, y = 0, z = 0, num = 0;
	int a = 0, b = 0, c = 0;

	while (*(n1 + y) != '\0')
		y++;
	while (*(n2 + z) != '\0')
		z++;
	y--;
	z--;
	if (z >= size_r || y >= size_r)
		return (0);
	while (z >= 0 || y >= 0 || x == 1)
	{
		if (y < 0)
			a = 0;
		else
			a = *(n1 + y) - '0';
		if (z < 0)
			b = 0;
		else
			b = *(n2 + z) - '0';
		c = a + b + x;
		if (c >= 10)
			x = 1;
		else
			x = 0;
		if (num >= (size_r - 1))
			return (0);
		*(r + num) = (x % 10) + '0';
		num++;
		z--;
		y--;
	}
	if (num == size_r)
		return (0);
	*(r + num) = '\0';
	rev_string(r);
	return (r);
}
