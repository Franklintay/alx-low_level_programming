#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameters
 * Return: the results otherwise 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(x, n);

	for (i = 0; i < n; i++)
		sum += va_arg(x, int);

	va_end(x);
	return (sum);
}
