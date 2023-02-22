#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: always 0.
 */

int main(void)
{
	int c;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f11, f12, f21, f22;
	unsigned long a, b;

	for (c = 0; c < 92; c++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);
		f1 = f2;
		f2 = sum;
	}
	f11 = f1 / 10000000000;
	f21 = f2 / 10000000000;
	f12 = f1 % 10000000000;
	f22 = f2 % 10000000000;
	for (c = 93; c < 99; c++)
	{
		a = f11 + f21;
		b = f12 + f22;
		if (f12 + f22 > 9999999999)
		{
			a += 1;
			b %= 10000000000;
		}
		printf("%lu%lu", a, b);
		if (c != 98)
			printf(", ");
		f11 = f21;
		f12 = f22;
		f21 = a;
		f22 = b;
	}
	printf("\n");
	return (0);
}
