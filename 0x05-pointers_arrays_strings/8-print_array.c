#include "main.h"
#include <stdio.h>

/**
 * void print_array - print elements in array
 * @a: array
 * @n: num of elements
 * Return: void
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n - 1; i++)
{
if (i == n - 1)
{
printf("%d", a[i]);
}
else
{
printf("%d, ", a[i]);
}
}
printf("\n");
}
