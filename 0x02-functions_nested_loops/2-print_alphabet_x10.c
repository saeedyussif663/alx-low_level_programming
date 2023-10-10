#include "main.h"

/**
 * main - prints the alphabets
 * in lowercase 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
char i = 'a';

for (int j = 0; j <= 10; j++)
{
  while (i <= 'z')
  {
    _putchar(i);
    i++;
  }

  _putchar('\n');
}

}
