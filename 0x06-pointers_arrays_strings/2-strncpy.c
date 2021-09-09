#include "main.h"

/**
 **_strncpy - coping string
 *@dest: copy source
 *@src: source to copy
 *@n: n bytes to copy
 *
 *Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
