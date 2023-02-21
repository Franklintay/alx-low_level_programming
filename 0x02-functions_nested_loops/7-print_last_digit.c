#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @i: number
 * Return: the value of i
 */

int print_last_digit(int i)
{
	int m = i  % 10;

	if (m < 0)
	{
		m = m * -1;
	}
	_putchar(m + '0');
	return (m);
}

