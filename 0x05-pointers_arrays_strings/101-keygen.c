#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - generates random valid passkeys for crackme
 * Return: 0 always
 */

int main(void)
{
	int i;
	int password_length;
	char password[100];

	srand(time(NULL));

	password_length = rand() % 10 + 10;

	for (i = 0; i < password_length; i++)
		password[i] = rand() % 94 + 33;

	password[password_length] = '\0';

	printf("%s\n", password);

	return (0);
}
