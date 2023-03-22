#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the opcodes of this program
 * @s: address of the main function
 * @bytes: number of bytes to be printed
 * Return: nothing
 */
void print_opcodes(char *s, int bytes)
{
	int i;

	for (i = 0; i < bytes; i++)
	{
		printf("%.2hhx", s[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints its own opcodes
 * @argc: arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, bytes);
	
	return (0);
}
