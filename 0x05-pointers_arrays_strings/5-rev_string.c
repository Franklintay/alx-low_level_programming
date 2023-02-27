#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: a string
 * Return: Reverse of a string
 */

void rev_string(char *s)
{
	char back = s[0];
	int opp = 0;
	int x;

	while (s[opp] != '\0')
		opp++;
	for (x = 0; x < opp; x++)
	{
		opp--;
		back = s[x];
		s[x] = s[opp];
		s[opp] = back;
	}
}
