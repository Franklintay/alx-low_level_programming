#include "main.h"
/**
 * is_prime_number - 1 if the input = prime number, otherwise 0
 * @n: given number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i = 0;

	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return is_prime_number(n);
}
