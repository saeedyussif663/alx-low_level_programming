#include "main.h"

/**
 * puts2 - prints every other function
 * @s: pointer to string
 * Return: void
 */

void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
}
