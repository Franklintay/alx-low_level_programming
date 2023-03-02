#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1: !st number
 * @n2: 2nd number
 * @r: the buffer
 * @size_r: the buffer size
 * Return: the result can not be stored in r the function must return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x, y = 0;

	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		x = (*n1 - '0') + (*n2 - '0');
		x += y;
		*(r + size_r) = (x % 10) + '0';
		y = x / 10;
	}
	for (; *n1; n1--, size_r--)
	{
		x = (*n1 - '0') + y;
		*(r + size_r) = (x % 10) + '0';
		y = x / 10;
	}
	for (; *n2; n2--, size_r--)
	{
		x = (*n2 - '0') + y;
		*(r + size_r) = (x % 10) + '0';
		y = x / 10;
	}
	if (y && size_r >= 0)
	{
		*(r + size_r) = (y % 10) + '0';
		return (r + size_r);
	}
	else if (y && size_r < 0)
		return (0);
	return (r + size_r + 1);
}
