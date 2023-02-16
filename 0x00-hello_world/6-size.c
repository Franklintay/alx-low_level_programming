#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: always 0
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int k;
	float f;

	printf("Size of Char: %lu byte(s)", sizeof(c));
	printf("Size of int: %lu byte(s)",sizeof(i));
	printf("Size of long int: %lu byte(s)", sizeof(l));
	printf("Size of long long int: %lu byte(s)n", sizeof(k));
	printf("Size of float: %lu byte(s)", sizeof(f));

	return (0);
}
