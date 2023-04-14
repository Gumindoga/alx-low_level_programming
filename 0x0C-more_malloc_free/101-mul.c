#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error
 */

int main(int argc, char *argv[])
{
	int i;
	long int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; argv[1][i]; i++)
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			exit(98);
		}

	for (i = 0; argv[2][i]; i++)
		if (!isdigit(argv[2][i]))
		{
			printf("Error\n");
			exit(98);
		}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%ld\n", num1 * num2);

	return (0);
}
