#include "mai.h"

/**
 * void more_numbers(void) - prints from 0 to 14 10x
 * Return: void
 */

void more_numbers(void)
{
int i = 0;
while (i < 10)
{
int j;
for(j = 0; j < 15; j++)
_putchar(j);

i++;
}
_putchar('\n');
}
