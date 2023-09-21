#include "main.h"

/**
 * string_toupper - Function that transforms a string to uppercase
 * @str: string
 *
 * Return: Always 0 (success)
 */

char *string_toupper(char *str)
{
	char *x = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (x);
}
