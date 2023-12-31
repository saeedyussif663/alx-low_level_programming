#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
*main - Take the arguments in command line to perform simple operations
*@argc: parameter
*@argv: parameter
*Return: 0
*/

int main(int argc, char **argv)
{

if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1] != '\0' || (get_op_func)(argv[2]) == NULL)
{
printf("Error\n");
exit(99);
}

if ((argv[2][0] == '%' || argv[2][0] == '/') && argv[3][0] == '0')
{
printf("Error\n");
exit(100);
}

printf("%i\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

return (0);
}
