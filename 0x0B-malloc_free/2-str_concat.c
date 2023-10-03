#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Function concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0 (success)
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int i, j, total, s1_length = 0, s2_length = 0;

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
		{
			s1_length++;
		}

	if (s2 != NULL)
		for (j = 0; s2[j] != '\0'; j++)
		{
			s2_length++;
		}

	total = s1_length + s2_length + 1;
	res = malloc(total * sizeof(char));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
	{
		res[i] = s1[i];
	}

	for (j = 0; j < s2_length; j++)
	{
		res[i] = s2[j];
		i++;
	}

	return (res);
}
