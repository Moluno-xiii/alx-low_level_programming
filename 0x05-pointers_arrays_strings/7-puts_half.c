#include "main.h"

/**
 * puts_half - Function half of a string
 * @str: string
 *
 * Return: Always 0 (success)
 */

void puts_half(char *str)
{
	int a = 0, n, b;

	if (str[0] != '\0')
	{
		while (str[a] != '\0')
		{
			a++;
		}

		if (a % 2 != 0)
		{
			n = a / 2;
		}
		else
		{
			n = (a + 1) / 2;
		}
	}

	for (b = n; b < a; b++)
	{
		_putchar(str[b]);
	}

	_putchar('\n');
}
