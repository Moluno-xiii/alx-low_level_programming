#include "main.h"

/**
 * puts_half - Function half of a string
 * @str: string
 *
 * Return: Always 0 (success)
 */

void puts_half(char *str)
{
	int a = 0, n;

	if (str[0] != '\0')
	{
		while (str[a] != '\0')
		{
			a++;
		}

		if (a % 2 != 0)
		{
			for (n = (a + 1) / 2; n < 1; n++)
			{
				_putchar(str[n]);
			}
		}
		else
		{
			for (n = a / 2; n < 1; n++)
			{
				_putchar(str[n]);
			}
		}
	}
	else
	{
	}
	_putchar('\n');
}
