#include "main.h"

/**
 * cap_string - print the start the stat of every letter of caps
 * @str: function parameter
 * Return: str
 */

char *cap_string(char *str)
{
int index = 0;

while (str[index])
{
if (!(str[index] >= 'a' && str[index] <= 'z'))
{
index++;
continue;
}

if (str[index - 1] == ' ' ||
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == ',' ||
str[index - 1] == ';' ||
str[index - 1] == '.' ||
str[index - 1] == '!' ||
str[index - 1] == '?' ||
str[index - 1] == '"' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
str[index - 1] == '{' ||
str[index - 1] == '}' ||
index == 0)
{
str[index] -= 32;
}

index++;
}

return (str);
}
