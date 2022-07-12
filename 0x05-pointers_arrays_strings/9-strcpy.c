#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: Destination string
 * @src: char type string
 * Return: Always 0. (epitychia)
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
