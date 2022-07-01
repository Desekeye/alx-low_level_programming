/*
 * file: task 4-print_alphabt.c
 * auth: PDT
 */
#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (epitychia)
 */
int main(void)
{char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
