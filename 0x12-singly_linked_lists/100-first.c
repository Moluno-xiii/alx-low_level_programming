#include <stdio.h>

void deez(void) __attribute__((constructor));
/**
 * deez - Function prints a sentence before executing main function
 * is executed
 */
void deez(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
