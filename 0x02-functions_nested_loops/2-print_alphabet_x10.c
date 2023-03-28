#include "main."

/**
 * print_alphabet10x - write alpha 10x in lower
 *
 * Return: 0;
 */

void print_alpbet10x(void)
{
  int count = 1;
  char c = 'a';

  while (count <= 10)
    while (c <= 'z') {
      _putchar(c);
      c++;
    }
    count++;
  _putchar('\n');
}
