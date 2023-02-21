#include "main.h"

/**
 * print_alphabet_x10 - print lower cas alphabet x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int a = 1;

	while (a <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		a++;
	}
}
