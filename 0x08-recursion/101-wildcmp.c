#include "main.h"

/**
 * wildcmp - compares two strings, 1 if same otherwise 0
 * @s1: one of the string
 * @s2: the other string
 * Return: 1 if string are same, otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return ((wildcmp(s1 + 1, s2)) || (wildcmp(s1, s2 + 1)));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
