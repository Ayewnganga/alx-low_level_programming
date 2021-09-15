#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return(n * _sqrt_recursion(n, 0));
}
