#include "main.h"
/**
  * *_strspn - return the number of occurent of a string
  * @s: string to check
  * @accept: character to match
  * Return: int
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
