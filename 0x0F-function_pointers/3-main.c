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
int respuesta;
	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}

	if (argv[2] == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	respuesta = (*get_op_func(argv[2])) (atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", respuesta);

	return (0);
}

