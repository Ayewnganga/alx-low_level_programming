#include <stdio.h>

/**
 * main - print alphabets lowercase and uppercase
 *
 * Return: Always 0
 */
int main(void)
{
char ch;

ch = "a,A";
while (ch <= "z,Z")
{
putchar(ch);
ch++;
}
putchar('\n');

return (0);
  
}
