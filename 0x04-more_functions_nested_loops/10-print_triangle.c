#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int a, b, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b <= (size - 1); b++)
		{
			for (a = 0; a < (size - 1) - b; a++)
			{
				_putchar(' ');
			}
			for (y = 0; y <= b; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
