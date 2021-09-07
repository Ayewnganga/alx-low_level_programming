#include "main.h"
#include <stdio.h>

/**
 * print_array - printing n elements of an array interger
 *@a: array interger
 *@n: elemebt of integer
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
		printf("%s%d", i == 0 ? "" : ", ", a[i]);

	printf("\n");



}
