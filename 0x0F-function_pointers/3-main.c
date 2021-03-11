#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - Enter point
 * @argc: Argument to main counter
 * @argv: Argument to main array to pointer to char
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}

	if ((*argv[2] != '+' &&
	     *argv[2] != '-' &&
	     *argv[2] != '*' &&
	     *argv[2] != '/' &&
	     *argv[2] != '%') ||
	    argv[2][1] != 0
		)

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
