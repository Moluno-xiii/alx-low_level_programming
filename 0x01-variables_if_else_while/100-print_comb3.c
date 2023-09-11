#include <stdio.h>
/**
 * main - Prints all possible combination of 2 digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n < 9)
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(n);
			putchar('\n');
		}
	}

		return (0);
}
