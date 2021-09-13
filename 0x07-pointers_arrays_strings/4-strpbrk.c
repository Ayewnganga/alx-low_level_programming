#include "main.h"

/**
 * _strpbrk - searching a string for any set of bytes
 * @s: pointer string
 * @accept: pointer string of searched size
 *
 * Return: a pointer to the byte in the string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] > '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}

	}
	return (0);
}
