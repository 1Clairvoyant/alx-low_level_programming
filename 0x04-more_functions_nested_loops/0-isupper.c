#include "main.h"

/**
  * _isupper - checks for caps
  * @c: character to check
  * Return: 1 or 0
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
