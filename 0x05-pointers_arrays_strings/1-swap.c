#include "main.h"

/**
 * swap_int - Function swaps the value of two integers
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int*b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
