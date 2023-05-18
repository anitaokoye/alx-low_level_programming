#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that  allocates memory using malloc
 * @b: nos of bytes to allocates
 * Return: a pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}