#include "main.h"

/**
 **_strncat - concatenates two strings
 *@dest: string
 *@src: pointer
 *@n: array
 *
 *Return: pointer result string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int k = 0;

	while (dest[l] != '\0')
		l++;

	while (src[k] != src[n])
	{
		dest[l] = src[k];
		l++;
		k++;
	}
	dest[l] = '\0';

	return (dest);

}
