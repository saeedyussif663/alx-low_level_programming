#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string passed in
 * Return: void
 */

void print_rev(char *s)
{
int lastIndex,i;
for (i = 0; s[i] != '\0'; i++)
lastIndex++;

for (i = lastIndex; i <= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
