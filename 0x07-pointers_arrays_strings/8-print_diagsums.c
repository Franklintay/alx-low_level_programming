#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of 2 diagonals square matrix.
 * @a: a pointer
 * @size: entry size
 * Return: always 0.
 */
void print_diagsums(int *a, int size)
{
	int sum = 0, su_m = 0, x;

	for (x = 0; x < size; x++)
	{
		sum = sum + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		su_m += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", sum, su_m);
}
