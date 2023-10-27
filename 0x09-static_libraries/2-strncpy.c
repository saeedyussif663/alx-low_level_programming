#include "main.h"
#include <string.h>

/**
 * _strncpy - copies two strings
 * @dest : destination, fnc parameter
 * @src: source, fnc parameter
 * @n: num of char, fnc parameter
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
