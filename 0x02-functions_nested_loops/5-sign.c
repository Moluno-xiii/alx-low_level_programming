#include "main.h"
/**
 * print_sign - Prints the sign of number
 * @number: integer to check
 * Return: 1 if number is positive, 0 if number is zero and -1 if number is negative
 */

int print_sign(int number)
{
	if (number > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (number < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else if (number == 0)
	{
		_putchar('0');
		return (0);
	}

}
