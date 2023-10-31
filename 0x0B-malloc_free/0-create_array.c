#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: parameter
 * @c: parameter
 * Return: array || null
 */

char *create_array(unsigned int size, char c)
{
if(size == 0)
{
return (NULL);
}

char *ar;
ar = malloc(sizeof(c) * size);
if (ar == NULL)
{
return (NULL);
}
else
{
unsigned int i;

for (i = 0; i < size; i++)
{
ar[i] = c;
}


}
