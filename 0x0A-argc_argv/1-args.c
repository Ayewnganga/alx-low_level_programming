#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed to program
 * @argc: argument
 * @argv: pointer to array
 *
 * Return: 0
 */

int main(argc, argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
