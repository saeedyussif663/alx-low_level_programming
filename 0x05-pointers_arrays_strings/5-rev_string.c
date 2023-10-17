#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
int i;

for (i = strlen(s); i >= 0; i--)
{
if (*s != '\0')
{
_putchar(s[i]);
}
}
_putchar('\n');
}
