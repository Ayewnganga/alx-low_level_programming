#include "main.h"

/**
 **_strcat - concatenates
 *@dest: string
 *@src: pointer
 *
 *Return: pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
		dest[i] = src[i];

	dest[i] = src[i];

	return (dest);
}
