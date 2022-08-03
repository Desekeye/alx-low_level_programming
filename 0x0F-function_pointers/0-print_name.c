#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - It is a function that prints a name
 * @name: The string to be printed out
 * @f: Function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	if (name == NULL || f == NULL)
		return;

	ptr = f;
	ptr(name);
}
