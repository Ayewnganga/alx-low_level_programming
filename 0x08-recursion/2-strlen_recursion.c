#include "main.h"

/**
 * _strlen_recursion - funtion that returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	while (s[l] != 0)
		l++;

	l--;
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	putchar('\n');
}
