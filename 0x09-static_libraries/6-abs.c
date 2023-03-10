#include "main.h"

/**
 * _abs - computes the absolue value of an integer
 *@i: an integer
 * Return: Absolute value of integer;
 */

int _abs(int i)
{

	if (i < 0)
	{
		int k = i * -1;

		return (k);
	}
	return (i);
}
