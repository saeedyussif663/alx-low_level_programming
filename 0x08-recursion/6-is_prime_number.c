#include "main.h"

/**
 * pnumber - checks for prime number
 * @x: parameter
 * @y: paramter
 * Return: prime
 */

int pnumber(int x, int y)
{
if (y == x)
return (1);
else if (y % x == 0)
return (0);
return (pnumber(x + 1, y));
}

/**
 * is_prime_number - returns prime
 * @n: paramter
 * Return: prime
 */

int is_prime_number(int n)
{
if (n == 1 || n < 0)
return (0);
return (pnumber(2, n));
}
