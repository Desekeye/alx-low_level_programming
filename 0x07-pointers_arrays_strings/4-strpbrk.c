#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The array to be searched
 * @accept: Target bytes from searching
 *
 * Return: Always 0. (epitychia)
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
