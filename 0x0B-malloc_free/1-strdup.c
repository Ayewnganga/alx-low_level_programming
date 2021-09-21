#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returning a pointer to a newly allocated space in memory
 * @str: parameter
 *
 * Return: pointer to duplicate string in allocated memory
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + 1))
		len++, i++;
	len++;

	duplicate_str = malloc(sizeof(char) * len);

	if (duplicate_str == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(duplicate_st + i) = *(str + i);
		i++;
	}

	return (duplicate_str);
}
