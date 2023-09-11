#include <stdio.h>

/**
 * main - Prints single digit numbers of base 10 starting with 0
 *
 * Return: Always 0 (success)
 */

int main(void)
{
        int a;

        for (a = 0; a < 10; a++)
        {
                putchar(a);
		a++;
        }
        putchar('\n');

        return (0);
}
