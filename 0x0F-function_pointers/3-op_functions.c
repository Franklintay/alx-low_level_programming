#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers
 * @a: integer
 * @b: another integer
 * Return: Sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two numbers
 * @a: integer
 * @b: another integer
 * Return: difference of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mulyiplication of two numbers
 * @a: integer
 * @b: another integer
 * Return: multiplication of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two numbers
 * @a: integer
 * @b: another integer
 * Return: division of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division of two numbers
 * @a: integer
 * @b: another integer
 * Return: remainder of the devision of two integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
