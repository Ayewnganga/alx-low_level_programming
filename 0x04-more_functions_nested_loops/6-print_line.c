#include "main.h"
#include <unistd.h>

/**
 * print_line - drawing a straight line
 *@n: how long line should be
 *
 * Return: 0
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
