#include "main.h"
/**
 * _abs - A function that computes absolute value of an integer
 * @b: parameter to be checked
 * Return:always b
 */
int _abs(int b)
{
	if (b < 0)
		b = -(b);
	else if (b >= 0)
		b = b;
	return (b);
}
