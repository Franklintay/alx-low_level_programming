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

	printf("Size of Char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
