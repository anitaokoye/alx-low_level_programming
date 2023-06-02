#include <stdio.h>
#include <stdlib.h>

void beforemain(void) __attribute__ ((constructor));

/**
 * beforemain - A function that prints 2 lines of
 * sentence before main is executed
 * function is executed
 */

void beforemain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
