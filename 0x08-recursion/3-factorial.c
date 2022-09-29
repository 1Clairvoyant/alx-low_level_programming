#include "main.h"
/**
  * factorial - function that returns the factorail of a number
  * @n: input
  * Return: always 0
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factonial(n - 1));
}
