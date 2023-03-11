#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * check_status - checks if number is positive
 * @var: variable
 * Return: Always 1 or 0
 */
int check_status(char *var)
{
	unsigned int i;

	i = 0;
	while (i < strlen(var))
	{
		if (!isdigit(var[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments to the function main
 * Return: Always 1 or 0
 */

int main(int argc, char *argv[])
{
	int i;
	int x;
	int sum = 0;

	i = 1;
	while (i < argc)
	{
		if (check_status(argv[i]))
		{
			x = atoi(argv[i]);
			sum += x;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
