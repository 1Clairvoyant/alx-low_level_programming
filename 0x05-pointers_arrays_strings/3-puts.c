#include "main.h"
#include "2-strlen.c"
/**
  * _puts - function
  * @str: input string
  */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		putchar(*(str + i));
	}
	_putchar('\n');
}
