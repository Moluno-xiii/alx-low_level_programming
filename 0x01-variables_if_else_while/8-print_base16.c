#include <stdio.h>

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char numbers;
	char alphabets;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);
	}
	for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');

	return (0);
}
