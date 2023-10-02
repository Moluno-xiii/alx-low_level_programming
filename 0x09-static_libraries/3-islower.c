#include "main.h"

/**
 * _islower - checks lowercase character
 * @c: character to check
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
