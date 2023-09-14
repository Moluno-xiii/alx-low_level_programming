#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 replacing multiples of 3 with
 * Fizz, multiples of 5 with Buzz, and multiples of both with FizzBuzz
 *
 * Return: Always 0 (success)
 */

int main(void)
{
    int number;

    for (number = 1; number <= 100; number++)
    {
        if (number % 3 == 0 && number % 5 == 0)
        {
            printf("FizzBuzz");
        }
        else if (number % 3 == 0)
        {
            printf("Fizz");
        }
        else if (number % 5 == 0)
        {
            printf("Buzz");
        }
        else
        {
            printf("%d", number);
        }

        if (number < 100)
        {
            printf(" ");
        }
    }

    printf("\n");

    return (0);
}

