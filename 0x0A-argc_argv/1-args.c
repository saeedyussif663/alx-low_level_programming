
#include <stdlib.h>
#include "main.h"

/**
  * main - Prints the number of args followed by a new line
  * @argc: argument
  * @argv: argument
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
(void) argv[0];
printf("%d\n", argc - 1);
return (0);
}
