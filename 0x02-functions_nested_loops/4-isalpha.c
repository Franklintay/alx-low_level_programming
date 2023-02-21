#include "main.h"

/**
 * _isalpha - checks for alphabetic charater
 * @c: alphabetic charater
 * Return: 1 if letter, lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
