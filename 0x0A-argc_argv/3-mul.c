#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments to the function main
 * Return: Always 1 or 0
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	printf("Error\n");
	return (1);
}
