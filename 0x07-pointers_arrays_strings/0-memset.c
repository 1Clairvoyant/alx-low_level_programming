#include "main.h"

/**
  * _memset - fills the first n byte of the memory area
  *@s: pointer
  *@b: arguement
  *@n: arguement
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
