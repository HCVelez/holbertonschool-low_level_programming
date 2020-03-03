#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that create a 2 dimensional array of ints
 *
 * @width: width of array
 * @height: height of array
 * Return: pointer to created array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row = 0, col = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (!grid)
	{
		free(grid);
		return (NULL);
	}

	while (row < height)
	{
		grid[row] = (int *)malloc(sizeof(int) * width);

		if (grid[row] == NULL)
		{
			while (row >= 0)
			{
				free(grid[row]);
				row--;
			}
			free(grid);
			return (NULL);
		}

		while (col < width)
		{
			grid[row][col] = 0;
			col++;
		}

		row++;
	}
	return (grid);
}
