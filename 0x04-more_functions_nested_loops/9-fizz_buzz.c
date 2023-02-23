#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100.
 * multiples(3) print Fizz
 * multiples five print Buzz.
 * multiple 3 and 5 print FizzBuzz.
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
