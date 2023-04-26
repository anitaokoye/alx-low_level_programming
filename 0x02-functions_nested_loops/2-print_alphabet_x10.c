#include "main.h"
/**
 * print_alphabet_x10 - Function that prints 10 times alphabet
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int a;
	char i;

	for (a = 1 ; a <= 10 ; a++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
