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
	int n = 0;
	int m = 0;

	while (dest[n] != '\0')
		n++;

	while (src[m] != '\0')
	{
		dest[n] = src[m];
		n++;
		m++;
	}
	dest[n] = '\0';

	return (dest);
}
