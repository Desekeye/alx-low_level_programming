/*
 * file: 4-isalpha.c
 * auth: PDT_Desekeye
 */
#include "main.h"
/**
 * _isalpha - Checks if a character is an alphabet
 * @c: the character to be checked
 *
 * Return: Always 1 if c is lower case or uppercase letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
