#include <stdio.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: arguments to the function main
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));

	return (0);
}
