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
char j;

for (i = 0; s[i] != '\0'; i++)
{
indexlast++;
}
for (i = 0; indexlast / 2; i++)
{
j = s[i];
s[i] = s[indexlast - 1 -i];
s[indexlast - 1 -i] = j;
}
}
