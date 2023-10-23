#include "main.h"

/**
 * _memcpy - copies certain element
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(dest + i) = *(src + i);
}

return (dest);
}
