#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: a destination string.
 * @src: additional string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dl = 0;
	int sl = 0;
	int x;

	for (x = 0 ; dest[x] != '\0' ; x++)
		dl++;
	for (x = 0 ; src[x] != '\0' ; x++)
		sl++;
	for (x = 0 ; x <= sl; x++)
		dest[dl + x] = src[x];
	return (dest);
}
