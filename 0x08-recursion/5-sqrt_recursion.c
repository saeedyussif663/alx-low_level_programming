#include "main.h"

/**
 * _sqrt_recursion - prints sqaure
 * @n: parameter
 * Return: square
 */

int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * squar - prints the square
 * @i: parameter
 * @j: parameter
 * Return: square
 */

int square(int i, int j)
{
int k = j * j;

if (k > i)
return (-1);
if (k == i)
return (j);
return (square(i, j + 1));
}
