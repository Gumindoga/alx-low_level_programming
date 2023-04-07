#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: char
 * @src: char
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l;
	int i;

	l = 0;
	while (src[0] != '\0')
	{
		l++;
	}

	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}

	dest[l] = '\0';

	return (dest);
}
