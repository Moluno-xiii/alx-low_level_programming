#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all numbers to 98
 * @num: starting point.
 * Return: Always 0 (success)
 */

void print_to_98(int num)
{
	if (num < 98)
	{
		for (num = num; num < 98; num++)
		{
			printf("%d, ", num);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (num = num; num > 98; num--)
		{
			printf("%d, ", num);
		}
		printf("%d\n", 98);
	}
}
