#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * Return: 1 if alphabet, 0 otherwise  
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}