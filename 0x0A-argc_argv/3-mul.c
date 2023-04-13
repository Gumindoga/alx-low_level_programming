#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 always
 */

int main(int argc; char **argv)
{
	int a;
	int b;
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	prod = a * b;

	printf("%d\n", prod);
	return (0);
}
