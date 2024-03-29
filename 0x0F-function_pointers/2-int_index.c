#include <stddef.h>

/**
 * int_index - search for an interger in array
 * @array: array
 * @size: size of array
 * @cmp: pointer comparing function to be executed
 *
 * Return: index where interger found, -1 if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(*(array + i)))
			return (i);

	return (-1);
}
