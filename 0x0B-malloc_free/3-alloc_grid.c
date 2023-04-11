#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *alloc_grid - pointer to a 2 dimensional array of integers
  *@width: width of grid
  *@height: height of grid
  *Return:NULL on failure, If width or height is 0 or negative
  *return NULL
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * width);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);

			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}

	}

	return (grid);

}


