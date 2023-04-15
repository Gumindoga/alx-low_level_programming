#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: pointer to resulting string
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	char sletters[] = "aeotl";
	char bletters[] = "AEOTL ";
		 char numbers[] = "43071";

	while (s[i] != '\0')
	{
		for (j = 0; sletters[j] != '\0'; j++)
		{
			if (s[i] == sletters[j] || s[i] == bletters[j])
			{
				s[i] = numbers[j];
			}
		}

		i++;
	}

	return (s);
}
