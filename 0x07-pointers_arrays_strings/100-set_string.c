#include "main.h"
#include <stdio.h>

/**
 * main - Function that sets the value of a pointer to a char
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char *a0 = "Bob Dylan";
	char *a1 = "Robert Allen";

	printf("%a, %a\n" a0, a1);
	set_string(&a1, a0);
	printf("%a, %a\n", a0, a1);
	return (0);
}
