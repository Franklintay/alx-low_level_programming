#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is the main function
 *
 * Return: return is 0
 */

int main(void)
{
	int a = 0;
	int b;
	int c;
	int d;
	int e;
	int f;

	while (a <= 98)
	{
		b = (c / 10 + '0');
		c = (c % 10 + '0');
		d = 0;
		while (d <= 98)
		{
			e = (d / 10 + '0');
			f = (d % 10 + '0');

			if (a < d)
			{
				putchar(b);
				putchar(c);
				putchar(' ');
				putchar(e);
				putchar(f);

				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
