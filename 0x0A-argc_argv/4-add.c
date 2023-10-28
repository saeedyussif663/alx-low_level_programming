#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: paramter
 * @argv: parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{

int i;
unsigned int j, sum = 0;
char *currentArg;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
currentArg = argv[i];

for (j = 0; j < strlen(currentArg); j++)
{
if (currentArg[j] < 48 || currentArg[j] > 57)
{
printf("Error\n");
return (1);
}
}

sum += atoi(currentArg);
currentArg++;
}

printf("%d\n", sum);
}
else
{
printf("0\n");
}
	return (0);
}
