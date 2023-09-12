#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: Always 0 (success)
 */

void times_table(void)
{
    int row, column, result;

    for (row = 0; row < 10; row++)
    {
        for (column = 0; column < 10; column++)
        {
            result = row * column;

            if (column > 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (result < 10)
                _putchar(' ');

            if (result >= 10)
                _putchar(result / 10 + '0');

            _putchar(result % 10 + '0');
        }
        _putchar('\n');
    }
}
