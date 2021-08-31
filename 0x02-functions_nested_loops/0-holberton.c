#include "main.h"

/**
 * main - putchar loops
 *
 * Retrun: Always 0 (success)
 */
int main(void)
{
char *c = "Holberton";
int i;

for ( i = 0; i < 10; i++) 
{
_putchar(c[i]);
}
_putchar('\n');

return 0;
}

