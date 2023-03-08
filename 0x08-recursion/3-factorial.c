#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: a given number
 * Return: n is lower than 0, the function should return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n -1));
}
