#include <stdio.h>

/**
 * main - printst the length of the arguments
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */

int main (int argc, char *argv[])
{
(void) argv[0];
printf("%d\n", argc - 1);
return (0);
}
