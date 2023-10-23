#include "main.h"

/**
 * _memset - fills the n byte
 * @s: function parameter
 * @b: function parameter
 * @n: function parameter
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
*(s + j) = b;

return(s)
}
