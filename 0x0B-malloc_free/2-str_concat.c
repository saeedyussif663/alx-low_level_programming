#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two string
 * @s1: parameter
 * @s2: parameter
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
int i, j;
char *ar;
int str1_len = 0;
int str2_len = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
str1_len++;
for (i = 0; s2[i] != '\0'; i++)
str2_len++;

ar = malloc(sizeof(char) * (str1_len + str2_len + 1));

if (ar == NULL)
return NULL;

for (i = 0; i < str1_len; i++)
ar[i] = s1[i];


for (j = 0; j < str2_len; j++)
ar[i++] = s2[j];


ar[i] = '\0';

return ar;

}
