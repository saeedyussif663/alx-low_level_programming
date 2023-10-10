#include "main.h"

/**
 * main - prints the alphabets
 * in lowercase 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
char i = 'a';
int j;
for (j = 1; j <= 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
