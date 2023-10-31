#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 *@gred: parameter
 *@height: parameter
*/

void free_grid(int **grid, int height)
{
int i = 0;

while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
