#include "main.h"

/**
 * compare - compare head and tail
 * @head: index starting from left of string
 * @tail: index starting from right of string, moving backwards
 *
 * Return: 1 if palindrome or 0 if not
 */

int compare(char *head, char *tail)
{
	if (head >= tail)
	{
		return (1);
	}
	if (*head == *tail)
	{
		return (compare(head + 1, tail - 1));
	}

	return (0);
}

/**
 * _strlen - find length of the string
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	if (*s == '\0')
	return (0);

	s++;
	return (1 + (_strlen(s)));
}


/**
 * is_palindrome - if a string is palindrome returns 1 and 0 if not
 * @s: pointer string
 *
 * Return: returns 1 if is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, (s + len - 1)));
}
