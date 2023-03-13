#include "main.h"
#include <stdlib.h>
/**
* free_grid - 2 dimensions grid previously created by your alloc_grid function
* @grid: first dimension
* @height: second dimension
* Return: frees 2 dimensions
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
