#include <stdio.h>

/**
 * main - Print the largest prime factor of a number
 *
 * Return: Always 0
 */

int main(void)
{
	long a, l;
	long n = 612852475143;

	for (a = 1; a <= 7; a++)
	{
		if (n % a == 0)
		{
			l = n / a;
		}
	}
	printf("%ld\n", l);
	return (0);
}
