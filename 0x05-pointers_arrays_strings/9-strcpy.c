#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: string Destination
 * @src: String copied from
 *
 * Return: Always 0. (epitychia)
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	int i = o;

	while (src[i] != 0)
		i++;
	for (j = 0; j <= i; j++)
		dest[j] = src[j];

	return (dest);

}
