#include "main.h"
#include <unistd.h>

/**
 * print_square - functions to print a square
 * @size: the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int j = size;
	int i;

	if (size <= 0)
		_putchar('\n');
	else
		while (size > 0)
		{
			for (i = 0; i < j; i++)
			{
				_putchar('#');
			}

			_putchar('\n');

			size--;
		}
}
