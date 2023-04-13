#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: count of arguments
 * @argv: array of pointers to arguments
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
