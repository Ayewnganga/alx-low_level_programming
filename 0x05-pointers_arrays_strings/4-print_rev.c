#include "main.h"

/**
 * print_rev - pritning string in reverse
 * @s: string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != 0)
		length++;

	length--;
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}

	_putchar('\n');
}
