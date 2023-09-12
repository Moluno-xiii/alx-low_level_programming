#include "main.h"

/**
 * print_last_digit - Prints the last digit of number
 * @num: inputed number
 * Return: the last digit of num
 */

int print_last_digit(int num)
{
	if (num < 0)
	num = -num;

	num = num % 10;

	_putchar(num +'0');

}
