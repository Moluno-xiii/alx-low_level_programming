#include "main.h"

/**
 * _isupper - Checks if a lette is uppercase
 * @c: letter to check
 * Return: 1 if letter is uppercase and 0 if otherwise
 */

int _isupper(int letter)
{
	if (letter >= 65 && letter <= 90)
	{
		return (1);
	}
	else
		return (0);
}
