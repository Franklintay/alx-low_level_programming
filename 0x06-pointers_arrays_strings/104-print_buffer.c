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
	int a, y;

	for (a = 0; a < size; a += 10)
	{
		printf("%08x:", a);
		for (y = 0; y < 10; y++)
		{
			if((y + a) >= size)
				printf(" ");
			else
				printf("%02x", *(b + y + a));
			if ((y % 2) != 0 && y != 0)
				printf(" ");
		}
		for (y = 0; y < 10; y++)
		{
			if ((y + a) >= size)
				break;
			else if (*(b + y + a) >= 31 && *(b + y + a) <= 126)
				printf("%c", *(b + y + a));
			else
				printf(".");
		}
		if (a >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
