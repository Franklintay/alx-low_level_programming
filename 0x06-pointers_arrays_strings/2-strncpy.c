#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: the initial string
 * @src: the additional string
 * @n: number of bytes
 * Return: the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
		dest[x] = src[x];
	return (dest);
}
