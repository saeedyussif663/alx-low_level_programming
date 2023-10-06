#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
int CH;
for (ch = 'a'; ch <= 'z'; ch++);
{
putchar(ch);
}
for (CH = 'A'; CH <= 'Z'; CH++);
{
putchar(CH);
}
putchar('\n');
return (0);
}
