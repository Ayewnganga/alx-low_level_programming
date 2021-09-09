#include "main.h"

/**
 **_strcmp - comparing two strings
 *@s1: string one
 *@s2: string two
 *
 *Return: num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0;

	while (*(s1 + j) == *(s2 + j) && *(s1 + j))
		j++;

	if (*(s2 + j))
		return (*(s1 + j) - *(s2 + j));
	else
		return (0);

}
