#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

#define PASSWORD_SUM 2772

/**
 * main - generates random valid passkeys for crackme
 * Return: 0 always
 */

int main(void)
{
	int i, sum = 0;
	char password[100];

	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
	}

	while (sum != PASSWORD_SUM)
	{
		i = rand() % 10;
		if (sum > PASSWORD_SUM && password[i] > 33)
		{
			sum--;
			password[i]--;
		}
		else if (sum < PASSWORD_SUM && password[i] < 126)
		{
			sum++;
			password[i]++;
		}
	}

	password[10] = '\n';
	printf("%s", password);

	return (0);
}
