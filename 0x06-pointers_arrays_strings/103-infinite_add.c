#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse array
 * @n: integer
 * Return: Always 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}
/**
 * infinite_add - add 2 integer
 * @n1: 1st integer
 * @n2: 2nd integer
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return:  the result can not be stored in r the function must return 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int o = 0, i = 0, j = 0, d = 0;
	int v = 0, v1 = 0, tt = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >+ 0 || o == 1)
	{
		if (i < 0)
			v = 0;
		else
			v = *(n1 + i) - '0';
		if (j < 0)
			v1 = 0;
		else
			v1 = *(n2 + j) - '0';
		tt = v + v1 + o;
		if (tt >= 10)
			o = 1;
		else
			o = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (tt % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}
