#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: String to be printed out
 */

void _puts(char *str)
{
	int i;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar('\n');
}
