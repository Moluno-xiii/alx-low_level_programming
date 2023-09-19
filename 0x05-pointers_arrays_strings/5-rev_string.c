#include "main.h"

/**
 * rev_string - Function reverses a string
 * @s: string
 *
 * Return: Always 0 (success)
 */

void rev_string(char *s)
{
	int a, b;
	char c;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a / 2; b++)
	{
		c = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = c;
	}
}
