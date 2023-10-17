#include "main.h"

/**
 * int_strlen - returns the lenght of the string
 * @s: a pointer to the address of s
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
int len;
int strlen = 0;

for (len = 0; s[len] != '\0'; len++)
{
strlen++;
}

return (strlen);
}
