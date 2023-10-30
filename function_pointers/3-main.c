#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - the entry point of the program
 * @argc: the number of arguments passed to the program
 * @argv: the list of arguments passed to the program
 *
 * Return: 0 on success, 98 if the incorrect number of arguments
 * is passed, 99 if an invalid operator is used, and 100 if
 * any form of division by 0 is attempted
*/

int main(int argc, char *argv[])
{
	int res;
	int arg_l = strlen(argv[2]);
	char op = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if ((arg_l > 1) || (op != '+' && op != '-' && op != '*' && op != '/' &&
	op != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	res = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", res);
	return (0);
}
