#include "main.h"

/**
 * swap_int - a function that swaps the value of two intergers.
 *@a: pointer
 *@b: pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
