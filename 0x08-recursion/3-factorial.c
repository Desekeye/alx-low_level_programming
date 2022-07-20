#include "main.h"

/**
 * _strlen_recursion - returns the factorial of a given number
 * @s: string to be inputted
 * Return: Always 0 (epitychia)
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
