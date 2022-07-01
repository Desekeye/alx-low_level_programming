/*
 * file: task 6-print_numberz.c
 * auth: PDT
 */
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (epitychia)
 */
int main(void)
{ int num;
	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
