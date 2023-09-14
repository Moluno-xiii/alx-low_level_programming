#include "main.h"

/**
 * _issupper - Checks if a letter is uppercase
 * @c: letter to check
 * Return : 1 if letter is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
