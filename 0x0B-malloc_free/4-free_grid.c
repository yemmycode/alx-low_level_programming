#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - Frees a 2-dimensional array.
* @grid: The 2-dimensional grid.
* @height: Dimensional height of the grid.
* Description: Frees the memory of the grid.
* Return: void.
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)

free(grid[i]);

free(grid);
}
