#include "main.h"

/**
 * _print_rev_recursion - funtion that prints a string in reverse
 * @s: pointer to the string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
