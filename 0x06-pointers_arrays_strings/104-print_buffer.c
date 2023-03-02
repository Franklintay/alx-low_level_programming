#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: buffer
 * @size: bytes of the buffer pointed
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int a, y, z;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		y = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (z = 0; z < 10; z++)
		{
			if (z < y)
				printf("%02x", *(b + a + z));
			else
				printf("  ");
			if (z % 2)
			{
				printf(" ");
			}
		}
		for (z = 0; z < y; z++)
		{
			int v = *(b + a + z);

			if (v < 32 || v > 132)
			{
				v = '.';
			}
			printf("%c", v);
		}
		printf("\n");
		a += 10;
	}
}
