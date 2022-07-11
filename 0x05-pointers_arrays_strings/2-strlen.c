#include "main.h"

/**
 * _strlen -  returns the length of a string.
 * @s: Inputted string pointer
 *
 * Return: Always 0. (epitychia)
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
