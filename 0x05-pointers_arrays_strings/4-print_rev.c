#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: A string
 * Return: always 0.
 */
void print_rev(char *s)
{
	int rever = 0;
	int string;

	while (*s != '\0')
	{
		rever++;
		s++;
	}
	s--;
	for (string = rever; string > 0; string--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

