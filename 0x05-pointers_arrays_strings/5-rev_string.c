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
int count = 0;
for (i = 0; i != '\0'; i++)
{
count++;
}
for (i = 0; i < count / 2; i++)
{
char j;
j = s[i];
s[i] = s[count - 1 - i];
s[count - i - 1] = j;
}
}
