#include "main.h"

/**
 * print_line - Prints a line using dashes
 * @n: number of dashes to use to print line
 *
 * Return: Always 0 (success)
 */

void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
