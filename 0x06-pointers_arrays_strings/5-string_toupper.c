#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to be changed.
 *
 * Return: Always 0 (epitychia)
 */

char *string_toupper(char *str)
{
	int i, j;
	char letter;

	i = 0;
	while (str[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		letter = str[j];
		if (letter >= 'a' && letter <= 'z')
		{
			letter -= 32;
			str[j] = letter;
		}
	}
	return (str);
}
