#include <stdio.h>
/**
 * print_alphabet - Prints alphabet in lower case.
 *
 * Return: Always (0) success
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
