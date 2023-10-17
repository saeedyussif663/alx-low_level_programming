#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string,followed by a new lin
 * @str: parameter
 * Return: void
 */

void puts_half(char *str)
{
int i;
int n;
int count = 0;

for (i = 0; str[i] != '\0'; i++)
{
count++;
}
n = (count) / 2;
if(n % 2 == 0)
{
n += 1;
}
for (i = n; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
