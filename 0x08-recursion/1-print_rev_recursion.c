#include "main.h"

/**
 * _print_rev_recursion - funtion that prints a string in reverse
 * @s: pointer to the string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s--;
	_puts_recursion(s);
}
