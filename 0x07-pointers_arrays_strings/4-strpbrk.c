#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: parameter
 * @accept: parameter
 * Return: 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
int i, x;
i = 0;
while (s[i] != '\0')
{
for (x = 0; accept[x] != '\0'; x++)
{
if (s[i] == accept[x])
return (s + i);
}
i++;
}
return (0);
}
