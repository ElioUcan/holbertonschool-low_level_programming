#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: int
 * @height: int
 * Return: nothings
 */

void free_grid(int **grid, int height)
{
int i;
int j;

for (i = 0; i < height; i++)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
}
}
