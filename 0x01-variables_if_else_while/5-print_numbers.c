#include <stdio.h>

/**
 * main - single digits
 *
 * Return: Always 0
 */
int main(void)
{
char ch;

ch = '0';
while (ch <= "10")
{
putchar(ch);
ch++;
}
putchar('\n');

return (0);
}
