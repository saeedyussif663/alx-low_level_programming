#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: parmater
 * @argv: paramter
 * Return: argc
 */

int main (int argc, char *argv[])
{
(void) argv[0];
printf("%d\n", argc - 1);
return (0);
}
