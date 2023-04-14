#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * multiply - multiplies two large numbers
 * @num1: first number
 * @num2: second number
 * Return: result of multiplication
 */

char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len = len1 + len2;
	char *result = calloc(len + 1, sizeof(char));
	int i, j, carry, n1, n2, sum;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		if (carry > 0)
			result[i + j + 1] += carry;
	}

	for (i = 0; i < len; i++)
		if (result[i] != 0)
			break;

	for (j = i; j < len; j++)
		result[j - i] = result[j] + '0';

	result[len - i] = '\0';

	return (result);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on error
 */

int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply(argv[1], argv[2]);
	printf("%s\n", result);
	free(result);

	return (0);
}
