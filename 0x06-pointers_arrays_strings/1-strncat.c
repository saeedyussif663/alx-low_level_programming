#include "main.h"
#include <string.h>

/**
 * strncat - concatnates two strings
 * @dest: destination of concatenation
 * @src: string to append
 * @n: num of char to append
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
