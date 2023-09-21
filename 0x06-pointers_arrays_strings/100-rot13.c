#include "main.h"
#include <stdio.h>

/**
 * rot13 - Function
 * @s: pointer
 *
 * Return: Always 0 (success)
 */

char *rot13(char *s)
{
	int a;
	int b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (a = 0; s[a] != '\0'; a++)
       {
		for (b = 0; b < 52; b++)
		{
			if (s[a] == data1[b])
			{
				s[a] = datarot[b];
				break;
			}
		}
       }
       return (s);
}
