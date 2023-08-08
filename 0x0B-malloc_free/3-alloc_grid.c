#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - this creates a 2D grid with given width and height.
* @width: Input width.
* @height: Input height.
* Return: the pointer to a 2-dimensional array.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int x, y;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
grid[x] = malloc(width * sizeof(int));
if (grid[x] == NULL)
{
for (; x >= 0; x--)
free(grid[x]);
free(grid);
return (NULL);
}
}

for (x = 0; x < height; x++)
for (y = 0; y < width; y++)
grid[x][y] = 0;

return (grid);
}
