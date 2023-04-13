#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			count++;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of words or NULL if str is NULL or ""
 */
char **strtow(char *str)
{
	int i, j, k, len, words;
	char **array;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	words = count_words(str);
	array = malloc(sizeof(char *) * (words + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; i < words; i++)
	{
		while (str[j] == ' ')
		{
			j++;
		}

		len = 0;
		while (str[j + len] != ' ' && str[j + len] != '\0')
		{
			len++;
		}

		array[i] = malloc(sizeof(char) * (len + 1));

		if (array[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(array[k]);
			}
			free(array);
			return (NULL);
		}

		for (k = 0; k < len; k++)
		{
			array[i][k] = str[j + k];
		}
		array[i][k] = '\0';
		j += len;
	}

	array[i] = NULL;
	return (array);
}
