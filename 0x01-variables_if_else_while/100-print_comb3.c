#include <stdio.h>
/**
 * main - Prints all possible combination of 2 digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			putchar(n + '0');
			putchar(m + '0');
		

		if (n != 9 && m !=9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}

		putchar('\n');
		return (0);
}
