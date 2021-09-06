#include "main.h"
#include <stdout.h>

/**
 * _puts - printing a string
 *@str:character array
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
