#include "main.h"

/**
 * print_triangle - Prints a triangle to terminal using #
 * @size: size of the triangle
 *
 * Return: Always 0 (success)
 */

void print_triangle(int size)
{
	int a, b, c;

	a = 0;
	b = size - 1;
	if (size <= 0)
		_putchar('\n');
	while (a < size)
	{
		b = size - 1 - a;
		c = a + 1;
		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		while (c > 0)
		{
			_putchar('#');
			c--;
		}
		_putchar('\n');
		a++;
	}
}
