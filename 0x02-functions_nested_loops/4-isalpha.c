#include "main.h"

/**
 * _isalpha - Checks for alphabetic order
 *
 * @alphabet: Character argument
 *
 * Return: 1 if alphabet is a letter, 0 otherwise
 */

int _isalpha(int alphabet)
{
	if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
