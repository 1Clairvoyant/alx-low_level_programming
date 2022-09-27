#include "main.h"
/**
  *_strstr - Locates a substring.
  *@needle: the substring to be located
  *@haystack: the string to be searched
  * Return: if the substring is located - a pointer to the beginning
  *of the located substring
  *if the substring is not located - null
  */
char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		a = 0;

		if (haystack[s] == needle[a])
		{
			do {
				if (needle[a + 1] == '\0')
					return (haystack);
				a++;
			} while (haystack[a] == needle[a]);
		}
		haystack++;
	}
	return ('\0');
}
