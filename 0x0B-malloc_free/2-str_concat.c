#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: one string
 * @s2: another string
 * Return: a point or Null when function failed
 */
char *str_concat(char *s1, char *s2)
{
	int dl = 0;
	int sl = 0;
	int x;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
		dl++;
	for (x = 0; s2[x] != '\0'; x++)
		sl++;
	c  = malloc(sizeof(char) * (dl + sl + 1));
	if (c == NULL)
		return (NULL);
	for (dl = 0; s1[dl] != '\0'; dl++)
		c[dl] = s1[dl];
	for (sl = 0; s2[sl] != '\0'; sl++)
	{
		c[dl] = s2[sl];
		dl++;
	}
	c[dl] = '\0';
	return (c);
}
