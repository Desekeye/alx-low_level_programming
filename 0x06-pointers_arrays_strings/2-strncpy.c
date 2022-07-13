#include "main.h"

/**
 * *_strncpy - copies a string.
 * @n: The maximum number of bytes to be copied from src.
 * @src: source string.
 * @dest: buffer storing copy of string
 *
 * Return: Always 0. (epitychia)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
