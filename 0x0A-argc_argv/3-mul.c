#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: arguments to the function main
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	printf("Error\n");
	return (1);
}
