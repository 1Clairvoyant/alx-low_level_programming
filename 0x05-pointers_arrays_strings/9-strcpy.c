#include "main.h"
/**
  * _strcpy - function
  * @dest: destiny
  * @src: source
  * Return: copy
  */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\n')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\n';
	return (start);
}
