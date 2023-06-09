#include "main.h"
#include <stdio.h>

/**
 * get_endianness - A function that checks if a machine is little or big endian
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return (*c);
}
