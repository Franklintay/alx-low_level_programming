#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: a memory area
 * @src: another memory area
 * @n: bytes the function copies
 * Return: always dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	for (; x < n; x++)
	{
		dest[x] = src[n];
		n--;
	}
	return (dest);
}
