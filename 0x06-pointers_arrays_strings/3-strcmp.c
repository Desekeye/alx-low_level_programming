#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared
 *
 * Return: Always 0 (epitychia)
 */

int _strcmp(char *s1, char *s2);
{
	int result, i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			result = (s1[i] - '0') - (s2[i] - '0');
		else
		{
			result = (s1[i] - '0') - (s2[i] - '0');
			;
		}
	}
	return (result);
}
