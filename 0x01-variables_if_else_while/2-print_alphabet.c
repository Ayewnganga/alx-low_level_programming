#include <stdio.h>

/**
 * main - prints the lowercase alphabet followed by a newline
 *
 * Return: returns 0
 */
int main(void)
{
char ch;

ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');

return (0);
}
