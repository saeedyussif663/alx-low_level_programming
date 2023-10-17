#include "main.h"

/** puts_half - prints half of a string,followed by a new lin
 * @s: parameter
 * Return: void
 */

void puts_half(char *str)
{
int len = 0;
int i;
for (i = 0; str[i] != '\0'; i++)
{
len++;
}
int half = len / 2;

for (i = half; i <= len; i++)
{
putchar(str[i]);
}

}
