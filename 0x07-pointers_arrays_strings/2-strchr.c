#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @c: Character pointed to
 * @s: the string located in
 *
 * Return: Always 0 (epitychia)
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (*s == c)
		return (s);
	return (0);
}
