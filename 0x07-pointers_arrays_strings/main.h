#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
/**
 *_putchar - puts character to standard output
 *@c: character to put to standard output
 */

char *_memset(char *s, char b, unsigned int n);
/**
 *_memset - function to fill memory with a constant byte
 *@s: pointer
 *@b: constant value
 *@n: value
 *Return: pointer to the memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _memcpy - function that copies memory area
 * @dest: final destination of the memory to be copied
 * @src: address of memory area to be copied
 * @n: size of memory to be copied
 * Return: a pointer to dest
 */

char *_strchr(char *s, char c);
/**
 *_strchr - function that locates a character in a string
 *@s: string
 *@c: character
 *Return: pointer to the character in string
 */

unsigned int _strspn(char *s, char *accept);
/*
 * _strspn - length of a prefix substring
 * @s: string
 * @accept: value
 * Return: number of bytes in the initial segment
 */

char *_strpbrk(char *s, char *accept);
/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: pointer to the string
 * @accept: pointer to the string of size
 * Return: pointer to the byte 
 */

char *_strstr(char *haystack, char *needle);
/**
 * _strstr - function that locates a substring
 * @haystack: pointers string
 * @needle: pointer of the substring
 * Return: pointer too the begining of the located substring
 */ 

#endif
