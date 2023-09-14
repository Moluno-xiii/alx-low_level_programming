#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14 ten times each on a new line
 *
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		b = 0;

		while (b < 15)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
			b++;
		}
		_putchar(('\n'));
	}
}
