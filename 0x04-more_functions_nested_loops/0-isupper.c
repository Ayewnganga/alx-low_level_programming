#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character number
 *
 * Return: 1 if uppercase, else 0
 */

int _isupper(int c)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));

		return (0);
}
