#include "main.h"

/**
 * free_grid - free memory of a grid
 * @grid: grid to be freed
 * @height: height of the grid
 * Return: Nothing (void function)
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
