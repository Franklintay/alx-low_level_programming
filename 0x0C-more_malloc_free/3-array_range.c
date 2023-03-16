#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum values
 * @max: maximum values
 * Return: a pointer, min > max or malloc fails, Null.
 */
int *array_range(int min, int max)
{
	int *x;
	int y, z;

	if (min > max)
		return (NULL);
	z = max - min + 1;
	x =  malloc(sizeof(int) * z);
	if (x == NULL)
		return (NULL);
	for (y = 0; min <= max; y++)
		x[y] = min++;
	return (x);
}
