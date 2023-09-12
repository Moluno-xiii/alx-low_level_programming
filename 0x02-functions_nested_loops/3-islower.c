#include "main.h"

/**
 * _islower - Checks for lower case alphabet
 * @alphabet: character argument
 * Return: 1 if alphabet is lowercase and 0 if alphabet is uppercase
 */

int _islower(int alphabet)
{
	if (alphabet >= 'a' && alphabet <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (alphabet);
}
