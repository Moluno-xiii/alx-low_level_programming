#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;

	}
	_putchar('\n');

}

