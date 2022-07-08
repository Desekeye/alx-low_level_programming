#nclude "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times
 */

void more_numbers(void)
{
	int num, count;

	for (num = 0; num < 10; num++)
	{
		for (count = 0; count < 15; count++)
		{
			if (count >= 10)
				_putchar((count / 10) + 48);
			_putchar((count % 10) + 48);
		}
		_putchar('\n');
	}
}
