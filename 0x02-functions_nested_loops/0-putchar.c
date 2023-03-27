#include "holberton.h"

/**
 * main - prints "_putchar" followed by a new line
 *
 * Return: 0
 */

int main(void) {
  char *s = "_putchar\n";
  while (*s)
    _putchar(*s++);
  return (0);
}
