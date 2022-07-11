#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: string Destination
 * @src: String copied from
 *
 * Return: pointer to dest. (epitychia)
 */

char *_strcpy(char *dest, char *src)
{
	int i = o;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
