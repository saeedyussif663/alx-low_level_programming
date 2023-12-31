#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: parameter
 * Return: pointer to the string || null
 */

char *_strdup(char *str)
{
char *ar;
unsigned int i;
unsigned int len = 0;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
len++;
}
len++;
ar = malloc(sizeof(char) * len);
if (ar == NULL)
return (NULL);
for (i = 0; i < len; i++)
{
ar[i] = str[i];
}
ar[len] = '\0';
return (ar);
}
