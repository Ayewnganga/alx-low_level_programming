#include "main.h"

/**
 * puts_half - printing half of a string
 * @str: string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int length = 0;
	int odd_even;
	int i;

	while (str[length] != 0)
		length++;

	odd_even = length % 2 == 0
		? length / 2
		: (length - 1) / 2;

	if (length % 2 == 0)
		for (i = 0; i < odd_even; i++)
			_putchar(str[odd_even + i]);
	else
		for (i = 1; i <= odd_even; i++)
			_putchar(str[odd_even + i]);

	_putchar('\n');
}
