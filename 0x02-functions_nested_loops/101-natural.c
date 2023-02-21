#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024 (excluded).
 *
 * Return: always 0.
 */

int main(void)
{
	int a, b;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b = 0;
			b <= a;
		}
		a++;
	}
	printf("%d\n", b);
	return (0);
}
