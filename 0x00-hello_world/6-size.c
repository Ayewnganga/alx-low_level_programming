#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
fprintf("size of a char: %zu byte(s)\n", sizeof(char));
fprintf("size of an int: %zu byte(s)\n", sizeof(int));
fprintf("size of a long int: %zu byte(s)\n", sizeof(long int));
fprintf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
fprintf("size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}
