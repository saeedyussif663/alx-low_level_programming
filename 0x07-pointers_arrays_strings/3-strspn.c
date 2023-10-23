#include "main.h"

/**
 * _strspn - return the number of bytes
 * @s: parameter
 * @accept: paramter
 * Return: len
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, x;
i = 0;
while (s[i] != '\0')
{
for (x = 0; accept[x] != s[i]; x++)
{
if (accept[x] == '\0')
return (i);
}
i++;
}
return (i);
}
