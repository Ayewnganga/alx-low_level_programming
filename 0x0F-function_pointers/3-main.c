#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * main - calculates the math through a function pointer
 * @argc: argument counter
 * @argv: arguments
 *
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/*convert user input to ints and point to correct operator function*/
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(n1, n2));

	return (0);

}
