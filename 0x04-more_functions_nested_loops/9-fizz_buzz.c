#include "main.h"
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * mul of 3 print Fizz
 * mul of 5 print Buzz
 * mul of both 3 and 5 print FizzBuzz
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 1; num < 101; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz")
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
