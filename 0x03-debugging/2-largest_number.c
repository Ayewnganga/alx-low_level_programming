#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first interger
 * @b: second interger
 * @c: third interger
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	printf("%d is the largest number\n", largest);

	if (a >= b && b >= c)
	{
		largest = a;
	}
	else if (b >= a && a >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
