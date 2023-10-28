#include <stdio.h>
#include "main.h"

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: parameter
 * @argv: parameter
 * Return: 0;
 */

int main(int argc, char *argv[])
{
int i = 0, j = 0;

if (argc == 3)
{
i = atoi(argv[1]);
j = atoi(argv[2]);
printf("%d\n", i * j);
}
else
{
printf("Error\n");
return (1);
}

return (0);
}
