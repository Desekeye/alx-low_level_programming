/*
 * file: 0-isupper.c
 * auth: PDT
 */

#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: Character to be checked
 *
 * Return: Always 1 if character is uppercase, 0 otherwise. (epitychia)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
