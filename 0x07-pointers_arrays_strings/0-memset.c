#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer
 * @b: another pointer
 * @n: bytes of the meory area pointed to by s.
 * Return: always s.
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
