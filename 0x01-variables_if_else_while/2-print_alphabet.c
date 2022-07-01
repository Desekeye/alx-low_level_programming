/*
 * file: task -2-print_alphabet.c
 * Auth: PDT
 */

#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (epitychia)
 */
int main(void)
{char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
