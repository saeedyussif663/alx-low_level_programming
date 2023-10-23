#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: parameter
 * @needle: parameter
 * Return: src
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack; haystack++) {
char *src = haystack;
char *sub = needle;

for (; *haystack && *sub && *haystack == *sub; haystack++, sub++);

if (!*sub) {
return (src);
}
}
return (NULL);
}
