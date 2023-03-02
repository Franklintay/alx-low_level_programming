#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to string
 * Return: a string
 */

char *rot13(char *s)
{
	int x;
	int y;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char op[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == input[y])
			{
				s[x] = op[y];
				break;
			}
		}
	}
	return (s);
}
