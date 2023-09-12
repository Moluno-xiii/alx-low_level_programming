#include "main.h"

/**
 * print_last_digit - Prints the last digit of number
 * @num: inputed number
 * @last_digit: last digit of num
 * Return: last_digit
 */

int print_last_digit(int num)
{
	int last_digit;
	
	last_digit = num % 10;

	if (num < 10)
	{
		num *= (-1);
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
