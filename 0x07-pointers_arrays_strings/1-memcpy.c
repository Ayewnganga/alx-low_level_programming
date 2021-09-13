#include "main.h"

/**
 *_memcpy - function that copies memory area
 *@dest: final destination of the memory to be copied
 *@src: address of memory area to be copied
 *@n: size of memory to be copied
 *
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);
}
