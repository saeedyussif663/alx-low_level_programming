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
unassigned int i;
i = strlen(str);
for (j = (i / 2); j < i; j++)
{
_putchar(str[j + 1]);
}
_putchar('\n');
}
