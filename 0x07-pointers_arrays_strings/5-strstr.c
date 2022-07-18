#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @needle: the substring in the string
 * @haystack: the string to be searched for
 *
 * Return: always 0 (epitychia)
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;

			if (needle[i + j] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}
