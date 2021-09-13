#include "main.h"

/**
 *_memset - function to fill memory with a constant byte
 *@s: pointer
 *@b: constant value
 *@n: value
 *
 *Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
