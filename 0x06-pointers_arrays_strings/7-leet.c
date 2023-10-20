#include "main.h"

/**
 * leet - formats string
 * @str: function parameter
 * Rturn: str
 */

char *leet(char *str)
{
  int i = 0;
  int j = 0;
  char s1[] = "aAeEoOtTlL";
  char s2[] = "4433007711";

while (str[i] != '\0')
{
while (j < 10) {
if (str[i] == s1[j])
{
str[i] = s2[j];
break;
}
j++;
}

i++;
j = 0;
}
