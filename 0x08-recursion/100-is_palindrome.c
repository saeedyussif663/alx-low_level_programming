#include "main.h"

/**
* _strlen -  length of
* @s: parameter
* Return: length
**/
int _strlen(char *s)
{
int i = 0;

if (*s == '\0')
return (0);
else
{
i = _strlen(s + 1);
i++;
}
return (i);
}

/**
* check - check string
* @c: parameter
* @d: parameter
* Return: a char
**/
int check(char *c, char *d)
{
if (*c != *d)
return (0);
else if (c >= d)
return (1);
else
return (check(c + 1, d - 1));
}


/**
* is_palindrome - if string is a palindrome
* @s: pparamter
* Return: integer
**/
int is_palindrome(char *s)
{
int i = _strlen(s);
char *a = s;
char *b = s + (i - 1);

if (i == 0)
return (1);
return (check(a, b));
}
