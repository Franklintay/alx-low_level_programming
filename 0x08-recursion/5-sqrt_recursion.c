#include "main.h"

int root_sqrt(int n, int a);

/**
 * root_sqrt - generate natural square root
 * @n: given number
 * @a: root for the given number
 * Return: result or -1
 */
int root_sqrt(int n, int a)
{
	if (a * a == n)
		return (a);
	if (a == n/2)
		return (-1);

	return (root_sqrt(n, a + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: a given number
 * Return: result or -1
 */
int _sqrt_recursion(int n)
{
	int a = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	return (root_sqrt(n, a));
}
