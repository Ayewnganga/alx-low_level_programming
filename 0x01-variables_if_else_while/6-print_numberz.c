#include <stdio.h>

/**
 * main - printing numbers from 0
 *
 * Return: Always 0
 */
int main(void)
{
int n = '0';

while (n <= '9')
{
putchar(n);
n++;
}
putchar('\n');

return (0);

}
