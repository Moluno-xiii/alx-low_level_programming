#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char number, alphabet;

	for (number = 0; number <= 9; number++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
