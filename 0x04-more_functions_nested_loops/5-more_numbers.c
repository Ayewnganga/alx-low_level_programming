#include "main.h"
#include <unistd.h>
/**
 * more_numbers - printing 10 times the numbers from 0 to 14
 *
 * Return: return multiple numbers
 */

void more_numbers(void)
{
	char i;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
