#include "main.h"
/**
 * _pow_recursion - returns value 1 number raised to power of another
 * @x: base number
 * @y: coefficient
 * Return: results or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
