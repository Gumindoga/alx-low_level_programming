#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 * Return: pointer to resulting string
 */

char *rot13(char *s)
{
	int i = 0;
	int j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
		}

		i++;
	}

	return (s);
}
