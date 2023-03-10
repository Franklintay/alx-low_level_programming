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
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
