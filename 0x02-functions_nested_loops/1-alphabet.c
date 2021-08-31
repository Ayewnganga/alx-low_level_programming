#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

_putchar('\n');
}
