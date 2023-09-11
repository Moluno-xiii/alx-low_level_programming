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
		for (m = 0; m <= 8; m++)
		{
		
		if (m > n)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (n != 8 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	}

		putchar('\n');
		return (0);
}
