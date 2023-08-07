#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2-dimension array.
 * @width: The width of the array.
 * @height: The height of the array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         else - a pointer to the 2-dimensional array.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int h_index;
int w_index;
if (width <= 0 || height <= 0)
return (NULL);
/*reserve mem allocation of the size of grid*/
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (h_index = 0; h_index < height; h_index++)
{
/*reserve memory of the each row in the grid*/
grid[h_index] = malloc(sizeof(int) * width);
if (grid[h_index] == NULL)
{
/*checks if memory allocation of rows fails and frees it*/
for (; h_index >= 0; h_index--)
free(grid[h_index]);
free(grid);
return (NULL);
}
}
for (h_index = 0; h_index < height; h_index++)
{
for (w_index = 0; w_index < width; w_index++)
grid[h_index][w_index] = 0;
}
return (grid);
}
