#include "main.h"

/**
 * print_alphabet_x10 - write alpha 10x in lower
 *
 * Return: 0;
 */

void print_alphabet_x10(void)
{
  int count;
  char c;

  for (count = 1; count <= 10; count++)
  {
    for (c = 'a'; c <= 'z'; c++)
    {
      _putchar(c);
    }
    _putchar('\n');
  }
}
