#include <stdio.h>

/**
 * main - print possible combinations of single digits
 *
 * Return: Always 0
 */
int main(void)
{
int a = '0';

while (a <= '9')
{
putchar(a);
if (a != '9')
{
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');

return (0);
}
