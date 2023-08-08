#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a ptr to a 2D array of integers.
 * @width: the width of the 2D array
 * @height: the height of the 2D array
 * Return: 0 if successful or NULL if it fails
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int e, f;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (e = 0; e < height; e++)
	{
		grid[e] = (int *)malloc(width * sizeof(int));
		if (grid[e] == NULL)
		{
			for (f = 0; f < e; f++)
			{
				free(grid[f]);
			}
				free(grid);
				return (NULL);
		}
		for (f = 0; f < width; f++)
		{
			grid[e][f] = 0;
		}
	}
	return (grid);
}
