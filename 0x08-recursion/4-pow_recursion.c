#include "main.h"

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: value
 *@y: power to raise to
 *
 * Return: power of a number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
