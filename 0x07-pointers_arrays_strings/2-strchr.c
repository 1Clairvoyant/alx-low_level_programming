#include "main.h"

/**
  *_strchr - locates a character in a string
  *@s: the string to be searched
  *@c: the character to be located
  * Return: if c is found - a pointer to the first occurance.
  * if c is not found - null
  */
char *_strchr(char *s, char c);
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return ('\0');
}
