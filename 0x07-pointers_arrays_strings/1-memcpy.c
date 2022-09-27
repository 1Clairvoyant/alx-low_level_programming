#include "main.h"

/**
  *_memcpy - function that copies @n bytes from memory area by @src into @dest
  *@dest: memory area that is to be copied
  *@src: where the area memory is copied from
  *@n: arguement
  * Retirn: a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
