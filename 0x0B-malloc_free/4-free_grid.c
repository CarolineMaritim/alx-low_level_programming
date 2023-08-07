#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees an array of integers.
 * @grid: The array checked.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
int index;
for (index = 0; index < height; index++)
free(grid[index]);
free(grid);
}
