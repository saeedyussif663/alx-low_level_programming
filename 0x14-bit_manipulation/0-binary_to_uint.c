#include "main.h"

/**
 * binary_to_uint - function that converts a binary.
 * @b: parameter
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
int i, usigned_int = 0, dec_val = 1;
if (!b)
return (0);

for (i = _strlen(b) - 1; i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
if (b[i] == '1')
{
usigned_int += dec_val;
}
dec_val *= 2;
}
return (usigned_int);
}

/**
 * _strlen - Function that returns the length of string.
 * @s: parameter
 * Return: The length of the null-terminated byte string s.
 */

int _strlen(const char *s)
{
int len = 0;

while (s[len] != '\0')
len++;
return (len);
}
