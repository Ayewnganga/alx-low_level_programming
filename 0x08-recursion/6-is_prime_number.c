#include "main.h"

/**
 * is_prime - returns 1 if the input interger is prime number
 * @n: number
 * @divisor: divisor
 *
 * Return: 1 if prime
 */

int is_prime(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}

	if (n % divisor == 0)
		return (0);

	return (is_prime(n, divisor + 1));
}

/**
 *is_prime_number - check if prime
 *@n: number
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int divisor = 5;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime(n, divisor));
}
