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

#endif
