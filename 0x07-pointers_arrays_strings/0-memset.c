#include "main.h"

/**
 * _memset - a function that copies memory area.
 * @s: a pointer
 * @b: another pointer
 * @n: sizeof the memory
 * Return: always dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
