#include "main.h"
#include <stdlib.h>



int **alloc_grid(int width, int height)
{
int i, j, f;
int **alloc_mem;
if (width <= 0 || height <= 0)
return ('\0');

alloc_mem = malloc(sizeof(int *) * height);

if (alloc_mem == NULL)
{
free(alloc_mem);
return ('\0');
}

i = 0;
while (i < height)
{
alloc_mem[i] = malloc(sizeof(int) * width);

if (alloc_mem[i] == NULL)
{
f = i;
while (f >= 0)
{
free(alloc_mem[f]);
f--;
}
free(alloc_mem);
return ('\0');
}

j = 0;
while (j < width)
{
alloc_mem[i][j] = 0;
j++;
}
i++;
}

return (alloc_mem);
}
