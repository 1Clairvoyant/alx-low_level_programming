#include "main.h"
/**
  *_strpbrk - Searches a string for any set of bytes.
  *@s: the string that is to be searched
  *@accept: The set of bytes to ne searched for
  * return: if a set is matched - a pointer to the matcjed byte
  * if no set is matched - null
  */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
