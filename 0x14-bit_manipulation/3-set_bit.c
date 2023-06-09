#include <stdio.h>
#include "main.h"

/**
 * set_bit - a function that set the value of a bit to 1 at a given index
 * @index: given index
 * @n: number to change
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 10)
	return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
