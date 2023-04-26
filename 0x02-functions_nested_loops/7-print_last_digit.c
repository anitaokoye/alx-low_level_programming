#include "main.h"
/**
 * print_last_digit - A function that print last digit
 * @m: function parameter
 * Return: k
 */
int print_last_digit(int m)
{
	int k;

	k = m % 10;
	if (m < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
