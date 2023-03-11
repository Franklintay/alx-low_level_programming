#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of argument
 * @argv: variables of argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int location, amount, dif, sub;
	int smallde[] = {25, 10, 5, 2, 1};

	location = amount = dif = sub = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);

	if (amount <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (smallde[location] != '\0')
	{
		if (amount >= smallde[location])
		{
			sub = (amount / smallde[location]);
			dif += sub;
			amount -= smallde[location] * sub;
		}
		location++;
	}
	printf("%d\n", dif);
	return (0);
}
