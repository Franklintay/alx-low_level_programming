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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
