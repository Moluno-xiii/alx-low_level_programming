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

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 != 0)
	{
		n = (a + 1) / 2;
	}
	else
	{
		n = 1 /2;
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
