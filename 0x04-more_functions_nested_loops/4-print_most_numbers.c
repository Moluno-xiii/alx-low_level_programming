#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 to 9 except 2 and 4
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 0 || i == 2)
		{
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
