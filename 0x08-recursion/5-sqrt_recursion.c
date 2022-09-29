#include "main.h"

int real_root(int n, int i);

/**
 * helper - helps decide if i'm right
 * @i: integer to guess
 * @n: integer to get root of
 * Return: value of root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_root(n, 0));
}

/**
 * _sqrt_recursion - returns square root
 * @n: integer to return
 * Return: returns int of squareroot
 */

int real_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_root(n, i + 1));
}
