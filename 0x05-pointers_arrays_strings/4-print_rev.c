#include "main.h"

/**
 * print_rev - Function prints a string in reverse
 * @s: string
 *
 * Return: Always 0 (success)
 */

void print_rev(char *s)
{
	int i = 0, n;

	while (s[i] != '\0')
	{
		i++;
	}

	n = i - 1;

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
