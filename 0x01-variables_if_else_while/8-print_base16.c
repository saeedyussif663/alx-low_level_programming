#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * returns - 0 always (success)
 */

int main(void)
{
int i;
int j;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (j = 'a'; j <= 'f'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
