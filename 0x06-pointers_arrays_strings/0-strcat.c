#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: source string to append to @dest
 * @dest: destination string to be concatenated upon
 *
 * Return: pointer to the string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *dest != 0; i++)
		dest++;

	for (j = 0; src[j] != 0; j++)
	{
		*dest = src[j];
		dest++;
	}
	*dest = '\0';
	dest -= (i + j);
	return (dest);
}
