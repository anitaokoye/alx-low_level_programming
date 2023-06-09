#include "main.h"
#include <stdio.h>

/**
 * clear_bit - A function that sets the value of a given bit to 0
 * @n: number to change
 * @index: index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
