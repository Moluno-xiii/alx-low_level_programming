#include "main.h"

/**
 * _isalpha - Checks for alphabetic order
 *
 * @alpha: Character argument
 *
 * Return: 1 if alpha is a letter, 0 otherwise
 */

int _isalpha(int alpha)
{
	if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
