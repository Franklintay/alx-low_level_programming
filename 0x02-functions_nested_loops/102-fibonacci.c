#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: always 0.
 */

int main(void)
{
	int a = 0;
	long b = 1, c = 2;

	while (a < 50)
	{
		if (a == 0)
			printf("%d", b);
		else if (a == 1)
			printf(", %d", c);
		else
		{
			b += c;
			b = c - b;
			printf(", %d", c);
		}
		++a;
	}
	printf("\n");
	return (0);
}
