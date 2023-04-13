#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 always
 */

int main(int argc, char **argv)
{

	int i;

	(void)argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
