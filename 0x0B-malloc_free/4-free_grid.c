#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to free a 2 dimensional grid
 *
 * @grid: 2 dimensional aray
 * @height: height of array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int index = 0;

	while (index < height)
	{
		free(grid[index]);
		index++;
	}

	free(grid);
}
