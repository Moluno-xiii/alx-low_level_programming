#include "main.h"

/**
 * print_square - Prints square using hashes
 * @size: size of square
 *
 * Return: Always 0 (success)
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
