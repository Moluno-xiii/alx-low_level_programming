#include "main.h"

/**
 * print_alphabet_x10 - Prints  alphabet 10 times.
 *
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int number = 0;

	while (number < 0)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		alphabet++;
	}
}
