#include "main.h"

/**
 * _strchr - returns the first ocurrenceof an element
 * @s: string
 * @c: char
 * Return: pointer to the found element
 */

char *_strchr(char *s, char c)
{
for (; *s; s++)
{
if (*s == c)
{
return (s);
}
}

return (s);
}
