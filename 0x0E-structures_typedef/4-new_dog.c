#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * len - find length of string
 * @str: string
 *
 * Return: length
 */
int len(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;
	return (i);
}

