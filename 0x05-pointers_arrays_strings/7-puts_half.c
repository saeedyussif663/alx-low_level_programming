#include "main.h"

/**
 * puts_half - prints half of a string,followed by a new lin
 * @str: parameter
 * Return: void
 */

void puts_half(char *str)
{
unsigned int j;
for (j = 1; j <= strlen(str); j++)
{
if ((j != '\0') && (j >= 5) && (j <= 9))
_putchar(str[j]);
}
_putchar('\n');

}
