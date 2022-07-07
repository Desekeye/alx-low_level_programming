#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 */
void print_most_numbers(void)
{
	int num;

	for (count = 0; count <= 9; count++)
	{
		if (num == '2' || num == '4')
			continue;
		else
			_putchar(num);
	}
	_putchar('\n');
}
