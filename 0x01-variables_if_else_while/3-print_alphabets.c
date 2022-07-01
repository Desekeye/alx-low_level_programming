/*
 * file: task 3-print_alphabets.c
 * auth: PDT
 */
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (epitychia)
 */
int main(void)
{ char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
