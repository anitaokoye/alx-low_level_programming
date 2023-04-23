#include <stdio.h>
/**
 * main - A program that print alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	int n = 97

	while (n <= 122)
	{
		if (n == 101 || n == 11)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
