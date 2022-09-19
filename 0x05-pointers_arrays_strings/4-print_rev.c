#include "main.h"
/**
  * print_rev - function
  * @s: input stting
  */
void print_rev(char *s)
{
	int index;

	for (index = 1; s[index] != '\0' ; index++)
	{
		_putchar(s[index])
	}
	_putchar('\n');
}
