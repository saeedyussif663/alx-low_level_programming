#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string passed in
 * Return: void
 */

void print_rev(char *s)
{
int i;
int indexlast = 0;
int j = 0;

for (i = 0; s[i] != '\0'; i++)
{
indexlast++;
}
for (i = indexlast - 1; i >= 0; i--)
{
s[j] = s[i];
}
}
