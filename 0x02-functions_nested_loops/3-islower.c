#include "main.h"

/**
 * _islower - checks for lower charater
 *@c: Lowercase charaters
 * Return: 1 if lowercase of otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
