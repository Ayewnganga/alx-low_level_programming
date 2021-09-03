#include "main.h"
#include <unistd.h>

/**
 * print_numbers - printing numbers from 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9';)
		i++;
	{
		_putchar(i);
	}
	_putchar('\n');
}
