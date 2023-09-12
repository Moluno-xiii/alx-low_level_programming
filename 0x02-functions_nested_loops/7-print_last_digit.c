#include "main.h"

/**
 * print_last_digit - Prints the last digit of number
 * @num: inputed number
 * Return: last digit of num
 */

int print_last_digit(int num)
{
	num %= 10;

	if (num < 0)
	{
		num *= (-1);
	}

	_putchar(num + '0');

	return (num);
}
