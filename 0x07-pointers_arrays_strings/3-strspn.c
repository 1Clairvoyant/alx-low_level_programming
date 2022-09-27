#include "main.h"
/**
  * strspn - gets the length of a
  *prefix substring
  *@s: the string to be searched
  *@accept: the prefix to be measured
  * Return: the number of bytes in s which consist of only
  *bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				bytes++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
