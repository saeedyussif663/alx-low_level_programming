#include "main.h"

/**
 * _strchr - returns the first ocurrenceof an element
 * @s: string
 * @c: char
 * Return: pointer to the found element
 */

char *_strchr(char *s, char c)
{
int i;
char *p;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
p = &s[i];
break;
}
else
{
p  = NULL;
}

}
return (p);
}
