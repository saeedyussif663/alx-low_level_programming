#include "main.h"

/**
 * reverse_array - reverses the elements of an array
 * @a : parameter, array
 * @n : parameter,array lenght
 * Return: void
 */

void reverse_array(int *a, int n)
{
int mid, i;
mid = n / 2;

for (i = 0; i < mid; i++)
{
int temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}

}
