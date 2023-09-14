#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 replacing mulitplies of 3 with
 * 'Fizz', mulitples of 5 with 'Buzz' and multiples of 3 and 5 with 'FizzBuzz'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (number % 5 == 0 && number % 3 != 0)
		{
			printf("Buzz");
			if (number != 100)
			{
				printf(" ");
			}
		}
		else if (number % 5 == 0 && number % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", number);
		}
	}
	printf("\n");


