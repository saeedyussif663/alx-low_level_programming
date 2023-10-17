#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a:  pointer to the address of a
 * @b: ponter to the address of b
 * Reutrn: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;

return (0);

}
