#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: pointer
 * @height: height of dimensional grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int len;

	for (len = 0; len < height; len++)
	{
		free(grid[len]);
	}
	free(grid);
}
