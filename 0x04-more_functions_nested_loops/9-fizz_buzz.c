#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints 1 to 100
 * fizz for multiples of 3, buzz for multiples of 5
 * Return: void
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n")
}
