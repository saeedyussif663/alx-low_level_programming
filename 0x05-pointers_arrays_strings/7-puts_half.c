#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string,followed by a new lin
 * @str: parameter
 * Return: void
 */

void puts_half(char *str)
{
int j;
int i;
i = strlen(str) / 2;
for (j = i; j < strlen(str); j++)
{
_putchar(str[j + 1]);
}
_putchar('\n');
}
