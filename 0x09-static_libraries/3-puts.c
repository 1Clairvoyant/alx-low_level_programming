#include "main.h"
/**
 * _puts - prints a string, followed by a new line,
 * Return: void
 *@c: character input
*/
int _putchar(char c);

void _puts(char *c)
{
	int i = 0;

	while (c[i])
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
}
