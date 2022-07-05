/*
 * file: 3-islower.c
 * auth: PDT_Desekeye
 */
#include "main.h"
/**
 * _islower - Checks if a character is lowercase
 * @c: character to be checked
 *
 * Return: Always 1 if lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
