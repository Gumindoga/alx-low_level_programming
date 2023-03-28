#include "main.h"

/**
 * print_alphabet_x10 - write alpha 10x in lower
 *
 * Return: 0;
 */

void print_alphabet_x10(void)
{
  int count = 1;
  char c = 'a';
  while (count <= 10)
  {
    while (c <= 'z')
    {
      _putchar(c);
      c++;
    }
    count++;
  }
  _putchar('\n');
}
