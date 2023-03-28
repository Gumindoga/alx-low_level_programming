#include "main.h"

/**
 * print_alphabet_x10 - write alpha 10x in lower
 *
 * Return: 0;
 */

void print_alphabet_x10(void)
{
  int count;
  
  for (count = 1; count <= 10; count++)
  {
    char c = 'a';
    while (c <= 'z')
    {
      _putchar(c);
      c++;
    }
  }
  _putchar('\n');
}
