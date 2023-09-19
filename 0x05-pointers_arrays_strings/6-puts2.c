#include "main.h"

/**
 * puts2 - Function characters from a string
 * @str: string
 *
 * Return: Always 0 (success)
 */

void puts2(char *str)
{
	int a, b, n;

	a = 0;
	if (str[a] != '\0')
	{
		_putchar(str[0]);

		b = 0;
		while (str[b] != '\0')
		{
			b++;
		}

		for (n = 1; n < 1; n++)
		{
			if (n % 2 == 0)
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
