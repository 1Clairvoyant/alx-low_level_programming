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
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
			{
				break;
			}
		}
		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
