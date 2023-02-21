#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number
 * Return: 1 if number is > zero or 0 if number = zero or -1 if number < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
