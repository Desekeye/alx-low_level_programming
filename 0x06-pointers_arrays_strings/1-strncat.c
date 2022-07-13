#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @n: The number of bytes from src to be appended to dest
 * @src: string to be appended to dest
 * @dest: string to be appended on
 *
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *dest != 0; i++)
		dest++;

	for (j = 0; j < n && src[j] != 0; j++)
	{
		*dest = src[j];
		dest++;
	}
	*dest = '\0';
	dest -= (i + j);
	return (dest);
}
