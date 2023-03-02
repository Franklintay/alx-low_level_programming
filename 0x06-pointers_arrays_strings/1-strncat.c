#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: the initial string
 * @src: the additional string
 * @n: number of charaters to be added to the initial string.
 * Return: the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dl = 0;
	int sl = 0;
	int x;

	for (x = 0 ; dest[x] != '\0' ; x++)
		dl++;
	for (x = 0 ; src[x] != '\0' ; x++)
		sl++;
	for (x = 0 ; x < n ; x++)
		dest[dl + x] = src[x];
	return (dest);
}
